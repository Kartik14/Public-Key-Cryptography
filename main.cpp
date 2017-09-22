#include <iostream>
#include "BigInteger.h"

using namespace std;

int main(int argc, char** argv) {

    BigInteger p("13907");
    BigInteger q("13963");

    BigInteger n = p*q;
    cout << "Public key n : " << string(n) << endl;
    BigInteger phi_n = (p-1)*(q-1);
    BigInteger e("1301");
    cout << "Public Key e : " << string(e) << endl;

    string input_message;
    cout << "Input you message m (integer): " ;
    cin >> input_message;
    BigInteger m(input_message);
    BigInteger enc = ModuloArithmetic::GenerateEncryptedMessage(m,e,n);
    cout << "Encrypted Message(m^e mod n) : " << string(enc) << endl;
    BigInteger d = ModuloArithmetic::InverseModulo(e,phi_n);
    cout << "Private key d : " << string(d)<<endl;
    cout << "DecryptedMessage((m^e)^d mod n) : " << string(ModuloArithmetic::GenerateDecryptedMesssage(enc,d,n)) << endl;


}

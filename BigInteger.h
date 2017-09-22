#include <string>
#define MAX 10000 // for strings

using namespace std;
//-------------------------------------------------------------
class BigInteger
{
private:
	string number;
	bool sign;
public:
	BigInteger(); // empty constructor initializes zero
	BigInteger(string s); // "string" constructor
	BigInteger(string s, bool sin); // "string" constructor
	BigInteger(int n); // "int" constructor
	void setNumber(string s);
	const string& getNumber(); // retrieves the number
	void setSign(bool s);
	const bool& getSign();
	BigInteger absolute(); // returns the absolute value
	void operator = (BigInteger b);
	bool operator == (BigInteger b);
	bool operator != (BigInteger b);
	bool operator > (BigInteger b);
	bool operator < (BigInteger b);
	bool operator >= (BigInteger b);
	bool operator <= (BigInteger b);
	BigInteger& operator ++(); // prefix
	BigInteger  operator ++(int); // postfix
	BigInteger& operator --(); // prefix
	BigInteger  operator --(int); // postfix
	BigInteger operator + (BigInteger b);
	BigInteger operator - (BigInteger b);
	BigInteger operator * (BigInteger b);
	BigInteger operator / (BigInteger b);
	BigInteger operator % (BigInteger b);
	BigInteger& operator += (BigInteger b);
	BigInteger& operator -= (BigInteger b);
	BigInteger& operator *= (BigInteger b);
	BigInteger& operator /= (BigInteger b);
	BigInteger& operator %= (BigInteger b);
	BigInteger& operator [] (int n);
	BigInteger operator -(); // unary minus sign
	operator string(); // for conversion from BigInteger to string
	BigInteger sqrt();
private:
	bool equals(BigInteger n1, BigInteger n2);
	bool less(BigInteger n1, BigInteger n2);
	bool greater(BigInteger n1, BigInteger n2);
	string add(string number1, string number2);
	string subtract(string number1, string number2);
	string multiply(string n1, string n2);
	pair<string, long long> divide(string n, long long den);
	string toString(long long n);
	long long toInt(string s);
};

class ModuloArithmetic
{
    public:
    static BigInteger Modulo(BigInteger &,BigInteger &);
    static BigInteger ModuloAddition(BigInteger &,BigInteger &,BigInteger &);
    static BigInteger ModuloSubtraction(BigInteger &,BigInteger &,BigInteger &);
    static BigInteger ModuloMultiplication(BigInteger ,BigInteger ,BigInteger );
    static BigInteger ModuloExponentiation(BigInteger ,BigInteger ,BigInteger);

    static BigInteger GCD(BigInteger , BigInteger );
    static BigInteger InverseModulo(BigInteger,BigInteger);
    static BigInteger DiscreteLogarithm(BigInteger a,BigInteger b,BigInteger c);
    static BigInteger GenerateEncryptedMessage(BigInteger message,BigInteger PublicKeyExponend,BigInteger PublicKeyMod);
    static BigInteger GenerateDecryptedMesssage(BigInteger EncryptedMessage,BigInteger d,BigInteger n);

    private:

    static BigInteger gcdExtended(BigInteger a,BigInteger b,BigInteger *x,BigInteger *y);


};


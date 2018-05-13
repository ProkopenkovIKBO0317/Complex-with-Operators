#include <cmath>
#include <iostream>
#include <string.h>

using namespace std;

void print_error();
void print_menu(char select);
void entercomplex();

class ComplexMain
{
protected:
	double real;
	double imag;
public:
	ComplexMain() : real(0), imag(0)
	{}
	~ComplexMain();
	ComplexMain(double real, double imag);
};



class Complex : public ComplexMain
{
public:

	Complex operator =(const Complex & other);
	Complex operator +( Complex & other);
	Complex operator - (Complex & other);
	Complex operator * (Complex & other);
	Complex operator / (Complex & other);

	friend ostream & operator << (ostream & os,  Complex & other);
	friend istream & operator >> (istream & os,  Complex & other);

	/*Complex(double real, double imag) : real(real), imag(imag) {}

	Complex operator + (Complex *c1)
	{
		return Complex(this->real + c1->real, this->imag + c1->imag);
	}*/
};



class ComplexNew : public Complex // наследование класса.
{
private:
	double mod;
public:
	double complexModulo(ComplexNew a);
	ComplexNew();
	~ComplexNew();
};


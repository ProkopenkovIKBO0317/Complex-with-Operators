#include "stdafx.h"
#include "complex.h"
using namespace std;
/////////////////////////////////////////////////////////////////////////
void print_error()
{
	cout << "Error, this  symbol is not supported" << endl;

}
void print_menu(char select)
{
	cout << "Enter operation" << endl;
	cout << "------------------------" << endl;
	cout << "'+' Sum" << endl;
	cout << "'-' Substraction" << endl;
	cout << "'*' Division" << endl;
	cout << "'/' Multiplication" << endl;
	cout << "'M' or 'm' Modulo of complex number" << endl;
	cout << "------------------------" << endl;

}
void entercomplex()
{
	setlocale(LC_ALL, "ru");
	cout << "Enter 1st and 2nd complex numbers, real imag: ";
}

ComplexMain::ComplexMain(double real, double imag)
{
	this->real = real;
	this->imag = imag;
}
ComplexMain::~ComplexMain() // Деструктор класса Complex
{
}


// Перегрузка операторов
Complex Complex::operator =(const Complex & other)
{
	this->real = other.real;
	this->imag = other.imag;
	return other;
}

Complex Complex::operator + ( Complex &other)
{
	Complex temp;
	temp.real = this->real + other.real;
	temp.imag = this->imag + other.imag;
	return temp;
}

Complex Complex::operator - (Complex & other)
{
	Complex temp;
	temp.real = this->real - other.real;
	temp.imag = this->imag - other.imag;
	return temp;
}

Complex Complex::operator * (Complex & other)
{
	Complex temp;
	temp.real = (this->real * other.real - this->imag * other.imag);
	temp.imag = (this->real * other.imag + other.real * this->imag);
	return temp;
}

Complex Complex::operator / (Complex & other)
{
	Complex temp;
	temp.real = ( (this->real*other.real + this->imag*other.imag) / (other.real*other.real + other.imag*other.imag) );
	temp.imag = ( (this->imag*other.real - this->real*other.imag) / (other.real*other.real + other.imag*other.imag) );
	return temp;
}

ostream& operator <<(ostream & os, Complex &other)
{
	os << "Real: " << other.real << endl;
	os << "Imagine: " << other.imag << endl;
	os << "Complex number is: (" << other.real << ';' << other.imag << "i)" << endl;
	return os;
}

istream & operator >> (istream & os, Complex & other)
{
	os >> other.real >> other.imag;
	return os;
}


// Определение методов производного класса ComplexNew
ComplexNew::ComplexNew()
{
	this->mod = 0.0;
}
ComplexNew::~ComplexNew()
{
}

double ComplexNew::complexModulo(ComplexNew a) 
{
	mod = sqrt(pow(a.real, 2) + pow(a.imag, 2));
	cout << "Modulo is: " << mod << endl;
	return mod;
}

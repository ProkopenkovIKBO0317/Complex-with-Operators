#include "stdafx.h"
#include "complex.h"
using namespace std;

int main()
{
	
	setlocale(LC_ALL, "ru");
	char select = ' ';
	char ch;
	Complex c1, c2, c3;
	ComplexNew c;
	double *mod = new double;

	print_menu(select); // меню выбора операций
	do {

	cin >> select;
	switch (select)
	{
	case '+': //операция сложение
		entercomplex();
		cin >> c1 >> c2;
		c3 = c1 + c2;
		cout << c3;
		break;
	case '-': // операция вычитание
		entercomplex();
		cin >> c1 >> c2;
		c3 = c1 - c2;
		cout << c3;
		break;
	case '*': // операция умножение
		entercomplex();
		cin >> c1 >> c2;
		c3 = c1 * c2;
		cout << c3;
		break;
	case '/': // операция деление
		entercomplex();
		cin >> c1 >> c2;
		c3 = c1 / c2;
		cout << c3;
		break;
	case 'M': // нахождение модуля комплексного числа
	case 'm':
		cout << "Enter complex number, real imag: "; cin >> c;
		c.complexModulo(c);
		break;
	default: // вызов ошибки в случае введения неверного символа.
		print_error();
		break;
		}
	cout << "\nПродолжать (y/n)? ";
	cin >> ch;
	} while (ch != 'n');
	system("pause");
	delete mod;
}






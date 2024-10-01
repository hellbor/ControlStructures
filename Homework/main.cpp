#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;


//#define CALCULATOR_1
#define CALCULATOR_2

void main()
{
	setlocale(LC_ALL, "");

#ifdef CALCULATOR_1

	double a;
	double b;
	char s;

	cout << "Введите выражение:"; cin >> a >> s >> b;

	if (s == '+')
	{
		cout << "Сумма равна:" << a << "+" << b << "=" << a + b << endl;
	}
	else if (s == '-')
	{
		cout << "Разность равна:" << a << "-" << b << "=" << a - b << endl;
	}
	else if (s == '*')
	{
		cout << "Произведение равно:" << a << "*" << b << "=" << a * b << endl;
	}
	else if (s == '/')
	{
		cout << "Деление равно:" << a << "/" << b << "=" << a / b << endl;
	}
#endif // CALCULATOR_1


#ifdef CALCULATOR_2

	long long number;

	cout << "Введите число:"; cin >> number;

	{
		cout << "Палиндром" << endl;
	}
	else if (number != conversely)
	{
		cout << "Не палиндром" << endl;
	}
#endif // CALCULATOR_2
}
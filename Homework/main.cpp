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

	cout << "������� ���������:"; cin >> a >> s >> b;

	if (s == '+')
	{
		cout << "����� �����:" << a << "+" << b << "=" << a + b << endl;
	}
	else if (s == '-')
	{
		cout << "�������� �����:" << a << "-" << b << "=" << a - b << endl;
	}
	else if (s == '*')
	{
		cout << "������������ �����:" << a << "*" << b << "=" << a * b << endl;
	}
	else if (s == '/')
	{
		cout << "������� �����:" << a << "/" << b << "=" << a / b << endl;
	}
#endif // CALCULATOR_1


#ifdef CALCULATOR_2

	long long number;

	cout << "������� �����:"; cin >> number;

	{
		cout << "���������" << endl;
	}
	else if (number != conversely)
	{
		cout << "�� ���������" << endl;
	}
#endif // CALCULATOR_2
}
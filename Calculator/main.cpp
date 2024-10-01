//Calc
#include<iostream>
using namespace std;

#define CALC_1
//#define CALK_2


void main()
{
	setlocale(LC_ALL, "");


	double a, b;	//числа вводимые с клавиатуры
	char s;			//s - sign (знак операции)
	cout << "Введите выражение:"; cin >> a >> s >> b;



#ifdef CALK_1
	if (s == '+')
	{
		cout << a << "+" << b << "=" << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << "-" << b << "=" << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << "*" << b << "=" << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << "/" << b << "=" << a / b << endl;
	}
	else
		cout << "Error: no operation" << endl;
#endif // CALK_1

#ifdef CALK_2
	switch (s)
	{
	case '+':cout << a << "+" << b << "=" << a + b << endl; break;
	case '-':cout << a << "-" << b << "=" << a - b << endl; break;
	case '*':cout << a << "*" << b << "=" << a * b << endl; break;
	case '/':
		if (b != 0)cout << a << "/" << b << "=" << a / b << endl;
		else cout << "Error: Division by zero" << endl;
		break;
	default: cout << "Error: No operation" << endl;
	}
	main();
#endif // CALK_2

}
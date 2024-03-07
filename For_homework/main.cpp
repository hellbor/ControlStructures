#include<iostream>
#include<conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define FACTORIAL
//#define DEGREE
//#define ASCII
//#define FIBONACCI_1
//#define SIMPLEX_NUMBERS
//#define MULTIPLICATION_TABLE
//#define PYTHAGORAS

int main()
{
	setlocale(LC_ALL, "");

#ifdef FACTORIAL
	int a, factorial = 1;
	cout << "Введите число:"; cin >> a;
	for (int i = 1; i <= a; i++)
	{
		factorial *= i;
	}
	cout << "Ответ: " << factorial << endl;
	return 0;
#endif // FACTORIAL

#ifdef DEGREE
	double a;
	int n;
	double N = 1;
	cout << "Введите основание степени:"; cin >> a;
	cout << "Введите показатель степени:"; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;

#endif // DEGREE

#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
#endif // ASCII

#ifdef FIBONACCI_1
	int n;
	cout << "Введите предельное число:"; cin >> n;
	for (int a = 0, b = 1, c = a + b; a <= n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
#endif // FIBONACCI_1

#ifdef SIMPLEX_NUMBERS
	int n;
	cout << "Введите предельное число:"; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		bool simple = true;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false; break;
			}
		}
		if (simple) cout << i << "\t";
	}
	cout << endl;
#endif // SIMPLEX_NUMBERS

#ifdef MULTIPLICATION_TABLE
	for (int i = 1; i <= 10; i++)
	{
		cout << "Таблица умножения на " << i << ":\n";
		for (int j = 1; j <= 10; j++)
		{
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i * j < 100)cout << " ";
			if (i * j < 10)cout << " ";
			cout << i * j << endl;
}
		cout << endl;
	}
#endif // MULTIPLICATION_TABLE

#ifdef PYTHAGORAS
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			if (i * j < 10)cout << " ";
			cout << i * j << "\t";
		}
		cout << "\n\n";
	}
#endif // PYTHAGORAS

}
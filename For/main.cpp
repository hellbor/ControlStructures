#include<iostream>
#include<conio.h>
#include<ctime>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define WHILE
//#define FOR
#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACCI_1
//#define FIBONACCI_2
//#define SIMPLEX_NUMBERS
//#define MULTIPLICATION_TABLE
//#define PYTHAGORAS


void main()
{
	setlocale(LC_ALL, "");

#ifdef WHILE
	int i = 0;		//счетчик цикла
	int n;			//количество операций
	cout << "Введите количество итераций:"; cin >> n;
	while (i < n)

	{
		cout << "Hello";
		i++;
}
#endif // WHILE

#ifdef FOR
	int n;
	cout << "Введите количество итераций:"; cin >> n;
	for (
		int i = 0;
		i < n;
		i++
		)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR  

#ifdef FACTORIAL
	char a = 100;
	a += 200; cout << (int)a << endl;
	int n;
	cout << "Введите число:"; cin >> n;
	double f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << "\n";
	}
#endif // FACTORIAL

#ifdef POWER
	double a;		//основание степени
	int n;		//показатель степени
	double N = 1;  //степень
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

#endif // POWER

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

#ifdef FIBONACCI_2
	int n;
	cout << "Введите количество чисел из ряда фибоначчи:"; cin >> n;
	for (int a = 0, b = 1, c = a + b; a <= n; a = b, b = c, c = a + b)
	{
		cout << a << " ";
	}
#endif // FIBONACCI_2

#ifdef SIMPLEX_NUMBERS
	int n;
	cout << "Введите предельное число:"; cin >> n;
	int simplex_counter = 0;
	time_t start = clock();
	for (int i = 0; i <= n; i++)
	{
		bool simple = true; //Предположим, что число простое,
		//но это нужно проверить
		for (int j = 2; j < sqrt(i); j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break; //Ключевое слово прерывает
				//текущую итерацию и все последующие
			}
		}
		if (simple)simplex_counter++;
		//cout << (simplex_counter++, i) << "\t";
	}
	time_t end = clock();
	cout << endl;
	cout << "Amount of simplex number:" << simplex_counter << endl;
	cout << "Calculated by " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;
#endif // SIMPLEX_NUMBERS

#ifdef MULTIPLICATION_TABLE
	for (int i = 1; i <= 10; i++)	//Outer for
	{
		cout << "Таблица умножения на " << i << ":\n";
		for (int j = 1; j <= 10; j++)//Inner for
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
			if (i * j < 100)cout << " ";
			if (i * j < 10)cout << " ";
			cout << i * j << "\t";
		}
		cout << "\n\n";
	}
#endif // PYTHAGORAS
}
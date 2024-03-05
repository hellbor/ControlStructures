#include <iostream>
#include <conio.h>
using namespace std;
const int width = 8;
using std::cin;
using std::cout;
using std::endl;

#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define LOWER_LEFT_ANGLE	(char)192
#define LOWER_RIGHT_ANGLE	(char)217
#define HORIZONTAL_LINE		(char)196 << (char)196
#define VERTICAL_LINE		(char)179
#define WHITE_BOX			(char)219 << (char)219
#define BLACK_BOX			' ' << ' '

//#define GEOMETRY_0
//#define GEOMETRY_1
//#define GEOMETRY_2
//#define GEOMETRY_3
//#define GEOMETRY_4
//#define GEOMETRY_5
//#define GEOMETRY_6
//#define XOR
//#define CHESS_1
//#define CHESS_2
//#define PASCAL_TRIANGLE

void main()
{
	setlocale(LC_ALL, "");


#ifdef GEOMETRY_0
	int a;
	cout << "¬ведите размер фигуры:"; cin >> a;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}
#endif // GEOMETRY_0

#ifdef GEOMETRY_1
	int a;
	cout << "¬ведите размер фигуры:"; cin >> a;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}
#endif // GEOMETRY_1

#ifdef GEOMETRY_2
	int a;
	cout << "¬ведите размер фигуры:"; cin >> a;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			if (i + j <= a + 1)
				cout << "*" << " ";
		}
		cout << endl;
	}
#endif // GEOMETRY_2

#ifdef GEOMETRY_3
	int a;
	cout << "¬ведите размер фигуры:"; cin >> a;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			if (i <= j && i + j != 0)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
#endif // GEOMETRY_3

#ifdef GEOMETRY_4
	int a;
	cout << "¬ведите размер фигуры:"; cin >> a;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			if (i + j > a)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
#endif // GEOMETRY_4

#ifdef GEOMETRY_5
	int n;
	cout << "¬ведите размеры фигуры:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " "; cout << "/";
		for (int j = 0; j < i; j++) cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " "; cout << "\\";
		for (int j = i; j < n - 1; j++) cout << "  "; cout << "/";
		cout << endl;
	}
#endif // GEOMETRY_5

#ifdef GEOMETRY_6
	int n;
	cout << "¬ведите размер фигуры:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			if (i % 2 == j % 2) cout << "+ ";
			else cout << "- ";
		cout << endl;
	}
#endif // GEOMETRY_6

#ifdef XOR
	int a;
	int b;
	cout << "¬ведите число 1:"; cin >> a;
	cout << "¬ведите число 2:"; cin >> b;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	/*b ^= a ^= b;
	a ^= b;*/
	cout << a << endl;
	cout << b << endl;
#endif // XOR

#ifdef CHESS_1
	int n;
	cout << "¬ведите размер доски:"; cin >> n; n++;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZONTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			else if (i % 2 == j % 2)cout << WHITE_BOX;
			else cout << BLACK_BOX;
		}
		cout << endl;
	}
#endif // CHESS_1

#ifdef CHESS_2

	int n;
	cout << "¬ведите размер доски:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < n; l++)
				{
					cout << (i % 2 == k % 2 ? "* " : "  ");
				}
			}
			cout << endl;
		}
	}
#endif // CHESS_2

#ifdef PASCAL_TRIANGLE
		
	int h;
	cout << "¬ведите высоту треугольника:"; cin >> h;
	for (int i = 0; i < h; i++)
	{
		cout.width(width / 2);
		cout << "";
	}
	cout << left;
	cout << 1 << endl;
	int nf = 1;
	for (int n = 1; n <= h; n++)
	{
		nf *= n;
		int mf = 1;
		for (int i = 0; i < h - n; i++)
		{
			cout.width(width / 2);
			cout << "";
		}
		cout.width(width);
		cout << 1;
		for (int m = 1; m <= n; m++)
		{
			mf *= m;
			int nmf = 1;
			for (int nm = 1; nm <= n - m; nm++)nmf *= nm;
			cout.width(width);
			cout << nf / mf / nmf;
		}
		cout << endl;
	}
#endif //PASCAL_TRIANGLE
		
}
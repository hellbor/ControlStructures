#include <iostream>
using namespace std;

const int width = 8;

#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define LOWER_LEFT_ANGLE	(char)192
#define LOWER_RIGHT_ANGLE	(char)217
#define HORIZONTAL_LINE		(char)196 << (char)196
#define VERTICAL_LINE		(char)179
#define WHITE_BOX			(char)219 << (char)219
#define BLACK_BOX			' ' << ' '

//#define CHESS
//#define HARD_CHESS
//#define PASCAL_TRIANGLE

void main()
{
	setlocale(LC_ALL, "");

#ifdef CHESS
	int n;
	cout << "Введите размер доски:"; cin >> n; n++;
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
#endif // CHESS

#ifdef HARD_CHESS
	int n;
	cout << "Введите размер доски:"; cin >> n;
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
#endif // HARD_CHESS

#ifdef PASCAL_TRIANGLE
	int h;
	cout << "Введите высоту треугольника:"; cin >> h;
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
#endif // PASCAL_TRIANGLE


}
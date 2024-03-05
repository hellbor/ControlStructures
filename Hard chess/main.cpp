#include<iostream>
using namespace std;

//#define HARD_CHESS

void main()
{
	setlocale(LC_ALL, "");

#ifdef HARD_CHESS
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
#endif // HARD_CHESS

	int n;
	cout << "¬ведите размер доски:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << (i % 2 == j % 2 ? "* " : "  ");
		}
		cout << endl;
	}
}
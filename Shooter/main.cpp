#include<iostream>
#include<conio.h>

using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define SHOOTER_1
//#define SHOOTER_2

void main()
{
	setlocale(LC_ALL, "");
	char key;

#ifdef SHOOTER_1

	do
	{
		key = _getch();
		if (key == 119)
			cout << "W" << "-" << "������" << endl;
		else if (key == 115)
			cout << "S" << "-" << "�����" << endl;
		else if (key == 97)
			cout << "A" << "-" << "�����" << endl;
		else if (key == 100)
			cout << "D" << "-" << "�����" << endl;
		else if (key == 32)
			cout << "SPACE" << "-" << "������" << endl;
		else if (key == 13)
			cout << "ENTER" << "-" << "�����" << endl;
		else if (key == 27)
			cout << "ESCAPE" << "-" << "�����" << endl;
		else
			cout << "ERROR" << endl;
	} while (key != 27);

#endif // SHOOTER_1

#ifdef SHOOTER_2

	while (true)
	{
		key = _getch();
		switch (key)
		{
		case(119):cout << "W" << "-" << "������" << endl; break;
		case(115):cout << "S" << "-" << "�����" << endl; break;
		case(97):cout << "A" << "-" << "�����" << endl; break;
		case(100):cout << "D" << "-" << "������" << endl; break;
		case(32):cout << "SPACE" << "-" << "������" << endl; break;
		case(13):cout << "ENTER" << "-" << "�����" << endl; break;
		case(27):cout << "ESCAPE" << "-" << "�����" << endl; break;
		default:cout << "ERROR" << endl;
		}
	}

#endif // SHOOTER_2

}
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string>


using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double x, a, w;
	char q = 'y';


	while (q == 'y')
	{
		do
		{
			cout << "������� x = ";
			cin >> x;
			if (cin.fail())
			{
				cout << "����� ������ �����!\n";
				cin.clear();
				cin.ignore(36272, '\n');
			}
			else
			{
				cin.ignore(36272, '\n');
				break;
			}
		} while (true);

		do
		{
			cout << "������� a = ";
			cin >> a;
			if (cin.fail())
			{
				cout << "����� ������ �����!\n";
				cin.clear();
				cin.ignore(36272, '\n');
			}
			else
			{
				cin.ignore(36272, '\n');
				break;
			}
		} while (true);

		if (abs(x) >= 1)
		{
			if (a - pow(x, 2) < 0)
			{
				cout << "������������� ����� ��� ������" << endl;
			}
			else
			{
				w = sqrt(a - pow(x, 2));
				cout << w << endl;
			}
			
		}
		else
		{
			if (x != 0)
			{
				w = a * log(abs(x));
				cout << w << endl;
			}
			else
			{
				cout << "�� ����� �������" << endl;
			}
			
		}

		do
		{
			cout << "������ ������ ����� �����?(y/n)";
			cin >> q;
			if ((q != 'y') && (q != 'n'))
			{
				cout << "����� ������ 'y' ��� 'n'\n";
			}
			cin.ignore(36272, '\n');
		} while ((q != 'y') || (q != 'n'));
	}

	system("pause");
	return 0;
}

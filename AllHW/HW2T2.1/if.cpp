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
			cout << "Введите x = ";
			cin >> x;
			if (cin.fail())
			{
				cout << "Нужно ввести число!\n";
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
			cout << "Введите a = ";
			cin >> a;
			if (cin.fail())
			{
				cout << "Нужно ввести число!\n";
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
				cout << "Отрицательное число под корнем" << endl;
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
				cout << "Не имеет решения" << endl;
			}
			
		}

		do
		{
			cout << "Хотите ввести новые числа?(y/n)";
			cin >> q;
			if ((q != 'y') && (q != 'n'))
			{
				cout << "Нужно ввести 'y' или 'n'\n";
			}
			cin.ignore(36272, '\n');
		} while ((q != 'y') || (q != 'n'));
	}

	system("pause");
	return 0;
}

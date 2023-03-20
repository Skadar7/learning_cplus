#include <iostream>
#include <cstdlib>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	double x, y, z, b;
	string q = "y";

	while (q == "y")
	{
		do
		{
			cout << "Введите b = ";
			cin >> b;
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
			cout << "Введите y = ";
			cin >> y;
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
		
		if ((b - y > 0) && (b - x > 0))
		{
			z = log(b - y) + log(sqrt(b - x));
			cout << "z = " << z << "\n";
		}
		else
		{
			cout << "Не имеет решения\n";
		}

		do
		{
			cout << "Хотите ввести новые числа?(y/n)";
			cin >> q;
			if ((q != "y") && (q != "n"))
			{
				cout << "Нужно ввести 'y' или 'n'\n";
			}
			cin.ignore(36272, '\n');
		} while ((q != "y") && (q != "n"));
	}

	system("pause");
	return 0;
}
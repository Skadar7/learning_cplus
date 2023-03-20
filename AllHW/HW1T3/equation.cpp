#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	cout << "Уравнение bx + c = 0\n";
	double x, b, c;
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
			cout << "Введите c = ";
			cin >> c;
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

		if (b == 0)
		{
			cout << "Уравнение не имеет решений(на ноль делить нельзя)";
		}
		else
		{
			x = -c / b;
			cout << "x = " << x << "\n";
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
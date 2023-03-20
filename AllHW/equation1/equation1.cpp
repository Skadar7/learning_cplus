#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string>

using namespace std;

int main()
{
	double D, x, x1, x2, a, b, c;
	string q = "y";

	cout << "Уравнение ax^2 + bx + c = 0\n";

	while (q == "y")
	{
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

		D = pow(b, 2) - (4 * a * c);

		if (a == 0 && b == 0)
		{
			cout << "Уравнение не имеет решений\n";
		}
		else if ((a == 0) && (b != 0))
		{
			x = -c / b;
			cout << "x = " << x << "\n";
		}
		else
		{
			if (D > 0)
			{
				D = sqrt(D);
				x1 = (-b - D) / (2 * a);
				x2 = (-b + D) / (2 * a);
				cout << "Уравнение имеет два корня:\nx1 = " << x1 << "\nx2 = " << x2 << "\n";
			}
			else if (D == 0)
			{
				x = -b / (2 * a);
				cout << "Уравнение имеет один корень:\nx = " << x << "\n";
			}
			else
			{
				cout << "Уравнение не имеет корней\n";
			}
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
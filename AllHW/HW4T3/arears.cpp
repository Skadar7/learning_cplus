#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string>

using namespace std;

double rectangle(double a, double b)
{
	return a * b;
}

int circle(double r)
{
	return 3.14 * r;
}
int square(double a)
{
	return pow(a, 2);
}

int main()
{
	setlocale(LC_ALL, "rus");

	string q = "y";
	double a, b, c, r;

	while (q == "y")
	{
		cout << "Зададим стороны прямоугольнику" << endl;

		do
		{
			cout << "Введите длину прямоугольника: ";
			cin >> a;
			if (cin.fail())
			{
				cout << "Нужно ввести число!" << endl;
				cin.clear();
				cin.ignore(32676, '\n');
			}
			else
			{
				cin.ignore(32676, '\n');
				break;
			}
		} while (true);

		do
		{
			cout << "Введите ширину прямоугольника: ";
			cin >> b;
			if (cin.fail())
			{
				cout << "Нужно ввести число!" << endl;
				cin.clear();
				cin.ignore(32676, '\n');
			}
			else
			{
				cin.ignore(32676, '\n');
				break;
			}
		} while (true);

		cout << "\nЗададим сторону квадрата" << endl;
		do
		{
			cout << "Введите сторону квадрата: ";
			cin >> c;
			if (cin.fail())
			{
				cout << "Нужно ввести число!" << endl;
				cin.clear();
				cin.ignore(32676, '\n');
			}
			else
			{
				cin.ignore(32676, '\n');
				break;
			}
		} while (true);

		cout << "\nЗададим радиус круга" << endl;
		do
		{
			cout << "Введите радиус круга: ";
			cin >> r;
			if (cin.fail())
			{
				cout << "Нужно ввести число!" << endl;
				cin.clear();
				cin.ignore(32676, '\n');
			}
			else
			{
				cin.ignore(32676, '\n');
				break;
			}
		} while (true);

		cout << "Площадь прямоугольника = " << rectangle(a, b) << " м^2" << endl;
		cout << "Площадь квадрата = " << square(c) << " м ^ 2" << endl;
		cout << "Площадь круга = " << circle(r) << " м ^ 2" << endl;

		do
		{
			cout << "Хотите ввести другие параметры?(y/n)";
			cin >> q;
			if ((q != "y") && (q != "n"))
			{
				cout << "Нужно ввести 'y' или 'n'" << endl;
			}
			cin.ignore(32767, '\n');

		} while ((q != "y") && (q != "n"));
	}

	system("pause");
	return 0;
}
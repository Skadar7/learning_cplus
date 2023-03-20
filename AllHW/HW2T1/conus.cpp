#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double R, r, L, V, S, pi, h;
	pi = 3.14;
	string q = "y";

	while (q == "y")
	{
		do
		{
			cout << "Введите h = ";
			cin >> h;
			if ((cin.fail()) || h < 0)
			{
				cout << "Нужно ввести положительное число!\n";
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
			cout << "Введите R = ";
			cin >> R;
			if ((cin.fail()) || (R < 0))
			{
				cout << "Нужно ввести положительное число!\n";
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
			cout << "Введите r = ";
			cin >> r;
			if ((cin.fail()) || (r < 0))
			{
				cout << "Нужно ввести положительное число!\n";
				cin.clear();
				cin.ignore(36272, '\n');
			}
			else
			{
				cin.ignore(36272, '\n');
				break;
			}
		} while (true);

		while (true)
		{
			if (R < r)
			{
				cout << "Радиус меньшего основания (r) не может быть больше бОльшего основания (R)\nИзмените данные\n";
				do
				{
					cout << "Введите R = ";
					cin >> R;
					if ((cin.fail()) || (R < 0))
					{
						cout << "Нужно ввести положительное число!\n";
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
					cout << "Введите r = ";
					cin >> r;
					if ((cin.fail()) || (r < 0))
					{
						cout << "Нужно ввести положительное число!\n";
						cin.clear();
						cin.ignore(36272, '\n');
					}
					else
					{
						cin.ignore(36272, '\n');
						break;
					}
				} while (true);
			}
			else
			{
				break;
			}
		}

		L = sqrt(pow(R, 2.0) + pow(h, 2.0));
		V = ((pi * h) / 3) * (pow(R, 2.0) + pow(r, 2.0) + R * r);
		S = pi * (pow(R, 2.0) + pow(r, 2.0) + L * (R + r));
		cout << "L = " << L << "\nV = " << V << "\nS = " << S << "\n";

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
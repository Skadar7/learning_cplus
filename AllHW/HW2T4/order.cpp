#include <iostream>
#include <cstdlib>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	int x;
	string q = "y";

	while (q == "y")
	{
		do
		{
			cout << "Введите число: ";
			cin >> x;
			if ((cin.fail()) || x < 0)
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

		x++;
		cout << "Ряд из 10 последующих натуральных чисел: ";
		for (int i = 0; i < 10; i++)
		{
			cout << x++ << " ";
		}

		cout << "\n";

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
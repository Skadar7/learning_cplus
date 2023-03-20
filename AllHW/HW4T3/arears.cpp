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
		cout << "������� ������� ��������������" << endl;

		do
		{
			cout << "������� ����� ��������������: ";
			cin >> a;
			if (cin.fail())
			{
				cout << "����� ������ �����!" << endl;
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
			cout << "������� ������ ��������������: ";
			cin >> b;
			if (cin.fail())
			{
				cout << "����� ������ �����!" << endl;
				cin.clear();
				cin.ignore(32676, '\n');
			}
			else
			{
				cin.ignore(32676, '\n');
				break;
			}
		} while (true);

		cout << "\n������� ������� ��������" << endl;
		do
		{
			cout << "������� ������� ��������: ";
			cin >> c;
			if (cin.fail())
			{
				cout << "����� ������ �����!" << endl;
				cin.clear();
				cin.ignore(32676, '\n');
			}
			else
			{
				cin.ignore(32676, '\n');
				break;
			}
		} while (true);

		cout << "\n������� ������ �����" << endl;
		do
		{
			cout << "������� ������ �����: ";
			cin >> r;
			if (cin.fail())
			{
				cout << "����� ������ �����!" << endl;
				cin.clear();
				cin.ignore(32676, '\n');
			}
			else
			{
				cin.ignore(32676, '\n');
				break;
			}
		} while (true);

		cout << "������� �������������� = " << rectangle(a, b) << " �^2" << endl;
		cout << "������� �������� = " << square(c) << " � ^ 2" << endl;
		cout << "������� ����� = " << circle(r) << " � ^ 2" << endl;

		do
		{
			cout << "������ ������ ������ ���������?(y/n)";
			cin >> q;
			if ((q != "y") && (q != "n"))
			{
				cout << "����� ������ 'y' ��� 'n'" << endl;
			}
			cin.ignore(32767, '\n');

		} while ((q != "y") && (q != "n"));
	}

	system("pause");
	return 0;
}
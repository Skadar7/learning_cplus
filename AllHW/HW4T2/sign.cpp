#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int sign_func(int x)
{
	if (x > 0)
	{
		return 1;
	}
	else if (x == 0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");

	double x;
	string q = "y";
	while (q == "y")
	{
		do
		{
			cout << "������� ����� �����: ";
			cin >> x;
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

		cout << sign_func(x) << endl;

		do
		{
			cout << "������ ������ ������ �����?(y/n)";
			cin >> q;
			if ((q != "y") && (q != "n"))
			{
				cout << "����� ������ 'y' ��� 'n'";
			}
			cin.ignore(32767, '\n');
		} while ((q != "y") && (q != "n"));
	}

	system("pause");
	return 0;
}


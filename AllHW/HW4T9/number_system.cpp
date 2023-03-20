#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

double decimal(string x, int z);
bool check_more_10(string x, int y);
bool check_less_10(string x, int y);
string any_system(double x, int z);
string result(string x, int y, int z);

int main()
{
	setlocale(LC_ALL, "rus");

	string x;
	int y = 0, z = 0;
	string sign = "";
	
	cout << "Введите число: ";
	cin >> x;

	if (x[0] == '-')
	{
		sign = x.substr(0,1);
		x.erase(0, 1);
	}

	do
	{
		cout << "В какой системе счисления записано ваше число(2-16): ";
		cin >> y;
		if (cin.fail())
		{
			cout << "Нужно ввести число!\n";
			cin.clear();
			cin.ignore(36272, '\n');
		}
		else if (y < 2 || y > 16)
		{
			cout << "Введите систему счиления от 2 до 16" << endl;
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
		cout << "В какую систему счисления нужно перевести(2-16): ";
		cin >> z;
		if (cin.fail())
		{
			cout << "Нужно ввести число!\n";
			cin.clear();
			cin.ignore(36272, '\n');
		}
		else if (z < 2 || z > 16)
		{
			cout << "Введите систему счиления от 2 до 16" << endl;
			cin.clear();
			cin.ignore(36272, '\n');
		}
		else
		{
			cin.ignore(36272, '\n');
			break;
		}
	} while (true);

	transform(x.begin(), x.end(), x.begin(), toupper);

	switch (y)
	{
		case 2:
			if (check_less_10(x, y))
			{
				if (y == z)
				{
					cout << x << endl;
				}
				else
				{
					cout << sign + result(x, y, z) << endl;
				}
			}
			else
			{
				cout << "Введено неверное число!" << endl;
			}
		case 3:
			if (check_less_10(x, y))
			{
				if (y == z)
				{
					cout << x << endl;
				}
				else
				{
					cout << sign + result(x, y, z) << endl;
				}
			}
			else
			{
				cout << "Введено неверное число!" << endl;
			}
		case 4:
			if (check_less_10(x, y))
			{
				if (y == z)
				{
					cout << x << endl;
				}
				else
				{
					cout << sign + result(x, y, z) << endl;
				}
			}
			else
			{
				cout << "Введено неверное число!" << endl;
			}
		case 5:
			if (check_less_10(x, y))
			{
				if (y == z)
				{
					cout << x << endl;
				}
				else
				{
					cout << sign + result(x, y, z) << endl;
				}
			}
			else
			{
				cout << "Введено неверное число!" << endl;
			}
		case 6:
			if (check_less_10(x, y))
			{
				if (y == z)
				{
					cout << x << endl;
				}
				else
				{
					cout << sign + result(x, y, z) << endl;
				}
			}
			else
			{
				cout << "Введено неверное число!" << endl;
			}
		case 7:
			if (check_less_10(x, y))
			{
				if (y == z)
				{
					cout << x << endl;
				}
				else
				{
					cout << sign + result(x, y, z) << endl;
				}
			}
			else
			{
				cout << "Введено неверное число!" << endl;
			}
		case 8:
			if (check_less_10(x, y))
			{
				if (y == z)
				{
					cout << x << endl;
				}
				else
				{
					cout << sign + result(x, y, z) << endl;
				}
			}
			else
			{
				cout << "Введено неверное число!" << endl;
			}
		case 9:
			if (check_less_10(x, y))
			{
				if (y == z)
				{
					cout << x << endl;
				}
				else
				{
					cout << sign + result(x, y, z) << endl;
				}
			}
			else
			{
				cout << "Введено неверное число!" << endl;
			}
		case 10:
			for (int i = 0, j = x.length(); i < j; i++)
			{
				if ((x[i] == '/'))
				{
					cout << "Введено неверное число!" << endl;
					break;
				}
				else if (!isdigit(x[i]) && x[i] != '.')
				{
					cout << "Введено неверное число!" << endl;
					break;
				}
				else
				{
					if (y == z)
					{
						cout << x << endl;
					}
					else
					{
						cout << sign + result(x, y, z) << endl;
					}
				}
			}
		case 11:
			if (check_more_10(x, y))
			{
				if (y == z)
				{
					cout << x << endl;
				}
				else
				{
					cout << sign + result(x, y, z) << endl;
				}
			}
			else
			{
				cout << "Введено неверное число!" << endl;
			}
		case 12:
			if (check_more_10(x, y))
			{
				if (y == z)
				{
					cout << x << endl;
				}
				else
				{
					cout << sign + result(x, y, z) << endl;
				}
			}
			else
			{
				cout << "Введено неверное число!" << endl;
			}
		case 13:
			if (check_more_10(x, y))
			{
				if (y == z)
				{
					cout << x << endl;
				}
				else
				{
					cout << sign + result(x, y, z) << endl;
				}
			}
			else
			{
				cout << "Введено неверное число!" << endl;
			}
		case 14:
			if (check_more_10(x, y))
			{
				if (y == z)
				{
					cout << x << endl;
				}
				else
				{
					cout << sign + result(x, y, z) << endl;
				}
			}
			else
			{
				cout << "Введено неверное число!" << endl;
			}
		case 15:
			if (check_more_10(x, y))
			{
				if (y == z)
				{
					cout << x << endl;
				}
				else
				{
					cout << sign + result(x, y, z) << endl;
				}
			}
			else
			{
				cout << "Введено неверное число!" << endl;
			}
		case 16:
			if (check_more_10(x, y))
			{
				if (y == z)
				{
					cout << x << endl;
				}
				else
				{
					cout << sign + result(x, y, z) << endl;
				}
			}
			else
			{
				cout << "Введено неверное число!" << endl;
			}
	}

	system("pause");
	return 0;
}


bool check_less_10(string x, int y)
{
	for (int i = 0, j = x.length(); i < j; i++)
	{
		if ((x[i] == '/'))
		{
			return false;
		}
		else if ((x[i] > 47 + y || x[i] < '.'))
		{
			return false;
		}
	}
	return true;
}


bool check_more_10(string x, int y)
{
	for (int i = 0, j = x.length(); i < j; i++)
	{
		if ((x[i] == '/'))
		{
			return false;
		}
		else if (!isdigit(x[i]) && x[i] != '.')
		{
			if ((x[i] > 54 + y || x[i] < 'A'))
			{
				return false;
			}
		}
	}
	return true;
	
}


double decimal(string x, int y, int z)
{
	int num1 = 0;
	double num2 = 0.0;
	double sum = 0.0;
	string left = " ";
	string right = " ";

	for (int n = 0, m = x.length(); n < m; n++)
	{
		if (x[n] == '.')
		{
			left = x.substr(0, n);
			right = x.substr(n + 1, m);
			break;
		}
		else
		{
			left = x;
		}
	}	

	for (int i = 0, j = left.length(); i < j; i++)
	{
		if (isdigit(left[i]))
		{
			num1 += (left[i] - '0') * pow(y, j - i - 1);
		}
		else
		{
			num1 += (left[i] - '7') * pow(y, j - i - 1);
		}
	}
	if (right != " ")
	{
		for (int i = 0, j = right.length(); i < j; i++)
		{
			if (isdigit(right[i]))
			{
				num2 += (right[i] - '0') * pow(y, -i - 1);
			}
			else
			{
				num2 += (right[i] - '7') * pow(y, -i - 1);
			}
		}
		sum = num1 + num2;
		return sum;
	}
	else
	{
		return num1;
	}
}


string any_system(double x, int z)
{
	int dig1 = x;
	double dig2 = x - dig1;
	string temp_dig1 = "";
	string temp_dig2 = "";
	int temp = 0;
	int len_dig2 = 0;
	
	string len1 = to_string(dig2);
	for (int i = 0, j = len1.length(); i < j; i++)
	{
		len_dig2++;
	}
	len_dig2 = abs(log(pow(10, -len_dig2) / 2) / log(z));

	while (dig1 > 0)
	{
		temp_dig1 += to_string(dig1 % z);
		dig1 /= z;
	}
	reverse(temp_dig1.begin(), temp_dig1.end());

	while (dig2 != 0)
	{
		if (temp_dig2.length() > len_dig2)
		{
			break;
		}
		else
		{
			temp = dig2 * z;
			temp_dig2 += to_string(temp);
			dig2 = dig2 * z - temp;
		}
	}
	return temp_dig1 + "." + temp_dig2 + "0";
}


string result(string x, int y, int z)
{
	double num = 0.0;
	if (y == 10 && z == 10)
	{
		return x;
	}
	else if (y == 10)
	{
		num = atof(x.c_str());
		return any_system(num, z);
	}
	else if(z == 10)
	{
		num = decimal(x, y, z);
		return to_string(num);
	}
	else
	{
		return any_system(num, z);
	}
}
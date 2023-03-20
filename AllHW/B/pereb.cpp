#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int n = 0;
	int *mass = new int[n];
	cout << "Введите количество шариок: ";
	for (int i = 0; i < n; i++)
	{
		perestanovka(i, mass[i]);
	}

	system("pause");
	return 0;
}

void perestanovka(int m, int n)
{
	int q = 0;
	if (m == n)
	{
		cout << q++;
	}
	else
	{

	}
}
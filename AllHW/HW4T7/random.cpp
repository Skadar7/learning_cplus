#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int m1 = 37, i = 3, c1 = 64;
	int m2 = 25173, j = 13849, c2 = 65537;
	int S1 = 1, S2 = 1;

	for (int n = 0; n < i; n++)
	{
		S1 = (m1 * S1 + i) % c1;
	}
	cout << S1 << endl;

	for (int x = 0; x < j; x++)
	{
		S2 = (m2 * S2 + j) % c2;
	}
	cout << S2 << endl;

	system("pause");
	return 0;
}
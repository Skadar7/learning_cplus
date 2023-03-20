#include <cmath>
#include <iostream>
#include <cstdlib>
#include <map>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	char xy[21][50];
	int sh = 0;
	int pos = 0;
	double func[50];

	for (int i = 0; i < 50; i++)
	{
		func[i] = 0;
	}

	map <double, int> y = {
		{1.0, 0},
		{0.9,1},
		{0.8,2},
		{0.7,3},
		{0.6,4},
		{0.5,5},
		{0.4,6},
		{0.3,7},
		{0.2,8},
		{0.1,9},
		{0.0,10},
		{-0.1,11},
		{-0.2,12},
		{-0.3,13},
		{-0.4,14},
		{-0.5,15},
		{-0.6,16},
		{-0.7,17},
		{-0.8,18},
		{-0.9,19},
		{-1.0,20} };

	for (double i = -6; i < 6; i+=0.25)
	{
		func[sh] = round(sin(i)*10)/10;
		sh++;
	}
	/*cout << sh;
	for (int i = 0; i < 50; i++)
	{
		cout << func[i] << " индекс этого "  <<  y[func[i]]<< endl;

	}*/
	for (int m = 0; m < 49; m++)
	{
		pos = y[func[m]];
		for (int n = 0; n < 21; n++)
		{
			if (n == pos && (y[func[m]] != y[func[m-1]]))
			{
				xy[n][m] = '*';
			}
			else
			{
				xy[n][m] = 32;
			}
		}
	}
	for (int m = 0; m < 21; m++)
	{
		for (int n = 0; n < 49; n++)
		{
			cout << xy[m][n] << " ";
		}
		cout << "\n";
	}

	system("pause");
	return 0;
}

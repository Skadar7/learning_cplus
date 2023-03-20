#include <iostream>
#include <cstdlib>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	double y, x;

	x = -4;

	while (x <= 4)
	{
		if (x != 1)
		{
			y = (pow(x, 2.0) - 2 * x + 2) / (x - 1);
			cout << "x = " << x << "\ty = " << y << "\n";
		}
		else
		{
			cout << "При x = 1 решение нвозможно\n";
		}
		x += 0.5;
	}
	system("pause");
	return 0;
}
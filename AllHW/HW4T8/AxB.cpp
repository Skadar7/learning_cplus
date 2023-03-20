#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	double C[3][2] = {
		{ 0,0 },
		{ 0,0 },
		{ 0,0 } };

	double A[3][4] = {
		{5, 2, 0, 10},
		{3, 5, 2, 5},
		{20, 0, 0, 0}
	};
	double B[4][2] = {
		{1.20, 0.50},
		{2.80, 0.40},
		{5.0, 1.0},
		{2.0, 1.50} };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			C[i][0] += A[i][j] * B[j][0];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			C[i][1] += A[i][j] * B[j][1];
			
		}
	}
	double sum_ALL = 0;
	for (int n = 0; n < 3; n++)
	{
		for (int m = 0; m < 2; m++)
		{
			cout << C[n][m] << " ";
			sum_ALL += C[n][m];
		}
		cout << '\n';
	}

	double max_rub[1][2] = { 0,0 };
	double min_rub[1][2] = { 0,pow(10,5) };

	double max_com[1][2] = { 0,0 };
	double min_com[1][2] = { 0, pow(10,5) };

	double sum_rub = 0;
	double sum_com = 0;

	for (int i = 0; i < 3; i++)
	{
		if (C[i][0] > max_rub[0][1])
		{
			max_rub[0][0] = i;
			max_rub[0][1] = C[i][0];
		}
		if (C[i][0] < min_rub[0][1])
		{
			min_rub[0][0] = i;
			min_rub[0][1] = C[i][0];
		}
		if (C[i][1] > max_com[0][1])
		{
			max_com[0][1] = C[i][1];
			max_com[0][0] = i;
		}
		if (C[i][1] < min_com[0][1])
		{
			min_com[0][0] = i;
			min_com[0][1] = C[i][1];
		}
		sum_rub += C[i][0];
		sum_com += C[i][1];
	}

	cout << "������ ����� ����� ��������� " << max_rub[0][0]+1 << " ��������, �� ��������� " 
		<< max_rub[0][1] << " ������" << endl;

	cout << "������ ����� ����� ��������� " << min_rub[0][0] + 1 << " ��������, �� ��������� "
		<< min_rub[0][1] << " ������" << endl;

	cout << "������ ����� ������������ ������� " << max_com[0][0] + 1 << " ��������, �� ������� "
		<< max_com[0][1] << " ������������" << endl;

	cout << "������ ����� ������������ ������� " << min_com[0][0] + 1 << " ��������, �� ������� "
		<< min_com[0][1] << " ������������" << endl;

	cout << "����� ���� ������������ ����� = " << sum_rub << " ������" << endl;

	cout << "����� ���� ������������ = " << sum_com << endl;

	cout << "����� ����� �����, ��������� ����� ���� ��������� = " << sum_ALL << endl;

	system("pause");
	return 0;
}
#include <iostream>
#include <cstdlib>
#include <map>
#include <string>
#include <typeinfo>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	string text;
	double sum = 0;
	bool q = true;
	int w = 1;
	map <char, int> rome = { 
		{'I', 1},
		{'V', 5},
		{'X', 10},
		{'L', 50},
		{'C', 100},
		{'D', 500},
		{'M', 1000} };

	cout << "Введите любое римское число: ";
	getline(cin, text);

	for (int i = 0, j = text.length(), sh = 0; i < j; i++)
	{
		if (rome.find(text[i]) == rome.end())
		{
			cout << "Такая запись невозможна!" << endl;
			q = false;
			break;
		}
		else
		{
			
				if (sh == 4)
				{
					cout << "Такая запись невозможна!" << endl;
					q = false;
					break;
				}

				if (text[i] == text[i + 1])
				{
					sh++;
				}
				else
				{
					sh = 1;
				}
				if (i == 0)
				{
					sum += rome[text[i]];
				}
				else
				{
					if (rome[text[i]] > rome[text[i-1]])
					{
						sum = rome[text[i]] - sum;
					}
					else
					{

						sum += rome[text[i]];
					}
				}
				
			
			/*else
			{
				if (text[i] == text[i - 1])
				{
					sh++;
				}
				if (rome[text[i]] >= rome[text[i - 1]])
				{
					sum += rome[text[i]];
				}
				else
				{
					sum -= rome[text[i]];
				}
			}*/
		
		}

	}
	if (q)
	{
		cout << sum << endl;
	}
	

	system("pause");
	return 0;
}
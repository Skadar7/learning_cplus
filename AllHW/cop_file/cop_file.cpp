#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
	char s[50];
	char q[10000];

	cout << "Введите любой текст: ";
	cin.getline(q, 10000);

	ofstream file;
	file.open("D:\\test.txt", ios::app);
	file << q;
	file.close();

	ifstream fil("D:\\test.txt");
	if (!fil.is_open())
	{
		cout << "Файл не может быть открыт\n";
	}
	else
	{
		fil >> s;
		cout << s << "\n";

		fil.getline(s, 100000);
		fil.close();
		cout << s << endl;
	}

	system("pause");
	return 0;
}
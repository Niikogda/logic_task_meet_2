#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	   int year;
	   cout << "enter a year : ";
	   cin >> year;
	
	int days = 365 + ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
	cout << " in " << year << " year " << days << " days " << endl;

	return 0;
}


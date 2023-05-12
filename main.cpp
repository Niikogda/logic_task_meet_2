//#include <iostream>
//#include <windows.h>
//using namespace std;
//int main()
//{
//	int grn;
//	cout << "input grn: ";
//	cin >> grn;
//
//	int cops;
//	cout << "input cops: ";
//	cin >> cops;
//	
//	cout << 
//
//}

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int hryvnia, kop;
    cout << "Введіть суму в гривнях і копійках: ";
    cin >> hryvnia >> kop;

    int extraHryvnia = kop / 100;
    int correctedKop = kop % 100;
    int totalHryvnia = hryvnia + extraHryvnia;

    cout << "Коректована сума: " << totalHryvnia << " грн " << correctedKop << " коп" << endl;

    return 0;
}

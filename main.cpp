#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int hryvnia;
    cout << "Введіть суму в гривнях : ";
    cin >> hryvnia;
    int kop;
    cout << "Введіть суму в копійках: ";
    cin >> kop;

    int extraHryvnia = kop / 100;
    int correctedKop = kop % 100;
    int totalHryvnia = hryvnia + extraHryvnia;

    cout << "Коректована сума: " << totalHryvnia << " грн " << correctedKop << " коп" << endl;

    return 0;
}

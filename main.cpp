#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int hryvnia;
    cout << "������ ���� � ������� : ";
    cin >> hryvnia;
    int kop;
    cout << "������ ���� � �������: ";
    cin >> kop;

    int extraHryvnia = kop / 100;
    int correctedKop = kop % 100;
    int totalHryvnia = hryvnia + extraHryvnia;

    cout << "����������� ����: " << totalHryvnia << " ��� " << correctedKop << " ���" << endl;

    return 0;
}

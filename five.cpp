#include <iostream>
#include <cmath>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float p = 3.14;
    int r;
    std::cout << "������ ����� ���: ";
    std::cin >> r;

    float volume = (4.0 / 3.0) * p * pow(r, 3);
    std::cout << "��'�� ���: " << volume << std::endl;

    return 0;
}

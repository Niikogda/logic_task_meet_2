#include <iostream>
#include <windows.h>
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double scale, distance_cm, distance_km;

   
    std::cout << "���������� ������ �� ���������� ��������." << std::endl;
    std::cout << "������ ������ ���:" << std::endl;

    std::cout << "������� ����� (������� �������� � ������ ���������) -> ";
    std::cin >> scale;

    std::cout << "³������ �� �������, �� ���������� ������� ������ (��) -> ";
    std::cin >> distance_cm;

    distance_km = distance_cm * scale / 100000.0;

    std::cout << "³������ �� ���������� ��������: " << distance_km << " ��." << std::endl;

    return 0;
}

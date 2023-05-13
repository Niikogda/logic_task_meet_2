#include <iostream>
#include <windows.h>
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double scale, distance_cm, distance_km;

   
    std::cout << "Обчислення відстані між населеними пунктами." << std::endl;
    std::cout << "Введіть вихідні дані:" << std::endl;

    std::cout << "Масштаб карти (кількість кілометрів в одному сантиметрі) -> ";
    std::cin >> scale;

    std::cout << "Відстань між точками, які зображують населені пункти (см) -> ";
    std::cin >> distance_cm;

    distance_km = distance_cm * scale / 100000.0;

    std::cout << "Відстань між населеними пунктами: " << distance_km << " км." << std::endl;

    return 0;
}

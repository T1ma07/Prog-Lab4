#include <iostream>
#include "print.h"
#include "geom.h"

int main() {
    logging::printAuthorInfo(); // Функція виведення інформації про автора
    logging::printTaskInfo();   // Функція виведення завдання лабораторної

    double tr_point1;
    double tr_point2;
    double tr_point3;

    std::cout << "Enter first point of triangle:" << std::endl;
    std::cin >> tr_point1;

    std::cout << "Enter second point of triangle:" << std::endl;
    std::cin >> tr_point2;

    std::cout << "Enter third point of triangle:" << std::endl;
    std::cin >> tr_point3;

    std::cout << "Task completed." << std::endl; // Виводимо повідомлення про завершення роботи програми
    return 0;
}

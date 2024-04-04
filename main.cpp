#include <iostream>
#include "print.h"
#include "geom.h"

int main() {
    logging::printAuthorInfo(); // Функція виведення інформації про автора
    logging::printTaskInfo();   // Функція виведення завдання лабораторної

    std::tuple<double, double> tr_point1 = input_geom::inputTriangle1();
    std::tuple<double, double> tr_point2 = input_geom::inputTriangle2();
    std::tuple<double, double> tr_point3 = input_geom::inputTriangle3();

    bool is_triangle = geometry::isTriangle(tr_point1, tr_point2, tr_point3);
    if (is_triangle) {
        std::cout << "The points form a triangle." << std::endl;
    } else {
        std::cout << "The points do not form a triangle." << std::endl;
    }


    std::cout << "Task completed." << std::endl; // Виводимо повідомлення про завершення роботи програми
    return 0;
}

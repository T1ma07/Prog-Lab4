#include <iostream>
#include "print.h"
#include "geom.h"

int main() {

    logging::printAuthorInfo(); // Функція виведення інформації про автора
    logging::printTaskInfo();   // Функція виведення завдання лабораторної

    bool triangleCompleted = false;
    bool quadrilateralCompleted = false;

    //Вершини фігур, задані кортежем
    std::tuple<double, double> tr_point1;
    std::tuple<double, double> tr_point2;
    std::tuple<double, double> tr_point3;

    std::tuple<double, double> q_point1;
    std::tuple<double, double> q_point2;
    std::tuple<double, double> q_point3;
    std::tuple<double, double> q_point4;

    do {
        tr_point1 = input_geom::inputTriangle1();
        tr_point2 = input_geom::inputTriangle2();
        tr_point3 = input_geom::inputTriangle3();

        // Перевірка, чи утворюють точки трикутник
        std::string is_triangle = geometry::returnTriangle(tr_point1, tr_point2, tr_point3);

        std::cout << is_triangle << std::endl;

        if (is_triangle == "The points form a triangle.") {
            triangleCompleted = true;
        }

    } while (!triangleCompleted);

    do {
        q_point1 = input_geom::inputQuadrilateral1();
        q_point2 = input_geom::inputQuadrilateral2();
        q_point3 = input_geom::inputQuadrilateral3();
        q_point4 = input_geom::inputQuadrilateral4();

        // Перевірка, чи утворюють точки чотирикутник
        std::string is_quadrilateral = geometry::returnQuadrilateral(q_point1, q_point2, q_point3, q_point4);

        std::cout << is_quadrilateral << std::endl;

        if (is_quadrilateral == "The points form a quadrilateral.") {
            quadrilateralCompleted = true;
        }

    } while (!quadrilateralCompleted);

    // Перевірка, чи міститься чотирикутник у трикутнику
    bool quadrilateralInTriangle = geometry::isQuadrilateralInTriangle(q_point1, q_point2, q_point3, q_point4, tr_point1, tr_point2, tr_point3);

    if (quadrilateralInTriangle) {
        std::cout << "Quadrilateral is in triangle!" << std::endl;
    } else {
        std::cout << "Quadrilateral isn't in triangle!" << std::endl;
    }

    std::cout << "Task completed." << std::endl; // Виводимо повідомлення про завершення роботи програми

    return 0;
}

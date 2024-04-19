#include <iostream>
#include "print.h"
#include "geom.h"
#include "point.h"

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
        tr_point1 = logging::inputTriangle1();
        tr_point2 = logging::inputTriangle2();
        tr_point3 = logging::inputTriangle3();

        // Перевірка, чи утворюють точки трикутник
        geometry::returnTriangle(tr_point1, tr_point2, tr_point3);

        if (geometry::isTriangle(tr_point1, tr_point2, tr_point3)) {
            triangleCompleted = true;
        }

    } while (!triangleCompleted);

    do {
        q_point1 = logging::inputQuadrilateral1();
        q_point2 = logging::inputQuadrilateral2();
        q_point3 = logging::inputQuadrilateral3();
        q_point4 = logging::inputQuadrilateral4();

        // Перевірка, чи утворюють точки чотирикутник
        geometry::returnQuadrilateral(q_point1, q_point2, q_point3, q_point4);

        if (geometry::isQuadrilateral(q_point1, q_point2, q_point3, q_point4)) {
            quadrilateralCompleted = true;
        }

    } while (!quadrilateralCompleted);

    // Перевірка, чи міститься чотирикутник у трикутнику
    geometry::isQuadrilateralInTriangle(q_point1, q_point2, q_point3, q_point4, tr_point1, tr_point2, tr_point3);

    std::cout << "Task completed." << std::endl; // Виводимо повідомлення про завершення роботи програми

    return 0;
}

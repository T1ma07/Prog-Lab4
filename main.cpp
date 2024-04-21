#include "print.h"
#include "point.h"
#include "shapes.h"

int main() {

    logging::Log log;
    log.printAuthorInfo();
    log.printTaskInfo();

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

    geometry::Point point(tr_point1, tr_point2, tr_point3, q_point1, q_point2, q_point3, q_point4);
    geometry::Triangle triangle(tr_point1, tr_point2, tr_point3);
    geometry::Quadrilateral quadrilateral(q_point1, q_point2, q_point3, q_point4);
    do {
        tr_point1 = logging::inputTriangle1();
        tr_point2 = logging::inputTriangle2();
        tr_point3 = logging::inputTriangle3();

        // Перевірка, чи утворюють точки трикутник
        triangle.returnTriangle();

        if (triangle.checkTriangle()) {
            triangleCompleted = true;
        }

    } while (!triangleCompleted);

    do {
        q_point1 = logging::inputQuadrilateral1();
        q_point2 = logging::inputQuadrilateral2();
        q_point3 = logging::inputQuadrilateral3();
        q_point4 = logging::inputQuadrilateral4();

        // Перевірка, чи утворюють точки чотирикутник
        quadrilateral.returnQuadrilateral();

        if (quadrilateral.checkQuadrilateral()) {
            quadrilateralCompleted = true;
        }

    } while (!quadrilateralCompleted);

    // Перевірка, чи міститься чотирикутник у трикутнику
    point.isQuadrilateralInTriangle();

    log.printEnd(); // Виводимо повідомлення про завершення роботи програми

    return 0;
}

#include "print.h"
#include "point.h"
#include "shapes.h"
#include <array>

int main() {

    logging::Log::printAuthorInfo();
    logging::Log::printTaskInfo();

    //Вершини фігур, задані кортежем
    std::array<std::tuple<double, double>, 3> tr_point = logging::inputTriangle();
    std::array<std::tuple<double, double>, 4> q_point = logging::inputQuadrilateral();

    geometry::Point point(std::get<0>(tr_point), std::get<1>(tr_point), std::get<2>(tr_point),
            std::get<0>(q_point), std::get<1>(q_point),std::get<2>(q_point), std::get<3>(q_point));
    geometry::Triangle triangle(std::get<0>(tr_point), std::get<1>(tr_point), std::get<2>(tr_point));
    if (!triangle.checkTriangle()) {
        tr_point = logging::inputTriangle();
    }
    triangle.returnTriangle();

    geometry::Quadrilateral quadrilateral(std::get<0>(q_point), std::get<1>(q_point), std::get<2>(q_point), std::get<3>(q_point));
    if (!quadrilateral.checkQuadrilateral()) {
        q_point = logging::inputQuadrilateral();
    }
    quadrilateral.returnQuadrilateral();

    point.isQuadrilateralInTriangle();

    logging::Log::printEnd(); // Виводимо повідомлення про завершення роботи програми

    return 0;
}

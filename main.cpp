#include "print.h"
#include "point.h"
#include "shapes.h"
#include <array>

int main() {

    logging::Log::printAuthorInfo();
    logging::Log::printTaskInfo();

    bool triangleCompleted;
    bool quadrilateralCompleted;

    std::array<std::tuple<double, double>, 3> tr_point;
    std::array<std::tuple<double, double>, 4> q_point;

    geometry::Triangle* trianglePtr = nullptr;
    geometry::Quadrilateral* quadrilateralPtr = nullptr;

    do {
        tr_point = logging::inputTriangle();
        //geometry::Triangle triangle(std::get<0>(tr_point), std::get<1>(tr_point), std::get<2>(tr_point));
        trianglePtr = new geometry::Triangle(std::get<0>(tr_point), std::get<1>(tr_point), std::get<2>(tr_point));
        bool isTriangle = trianglePtr->returnTriangle();

        if (isTriangle) {
            triangleCompleted = true;
        }
    } while (!triangleCompleted);


    do {
        q_point = logging::inputQuadrilateral();
        //geometry::Quadrilateral quadrilateral(std::get<0>(q_point), std::get<1>(q_point), std::get<2>(q_point), std::get<3>(q_point));
        quadrilateralPtr = new geometry::Quadrilateral(std::get<0>(q_point), std::get<1>(q_point), std::get<2>(q_point), std::get<3>(q_point));
        bool isQuadrilateral = quadrilateralPtr->returnQuadrilateral();

        if (isQuadrilateral) {
            quadrilateralCompleted = true;
        }
    } while (!quadrilateralCompleted);


    geometry::Point point(std::get<0>(tr_point), std::get<1>(tr_point), std::get<2>(tr_point),
            std::get<0>(q_point), std::get<1>(q_point),std::get<2>(q_point), std::get<3>(q_point));

    point.isQuadrilateralInTriangle();

    logging::Log::printEnd(); // Виводимо повідомлення про завершення роботи програми

    return 0;
}

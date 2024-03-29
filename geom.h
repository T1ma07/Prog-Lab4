#ifndef GEOM_H
#define GEOM_H

#include <tuple>

namespace geometry {
    // Оголошення функцій для роботи з геометричними об'єктами
    bool isTriangle(std::tuple<double, double> point1, std::tuple<double, double> point2, std::tuple<double, double> point3);
    bool isQuadrilateralTriangle(std::tuple<double, double> point1, std::tuple<double, double> point2, std::tuple<double, double> point3, std::tuple<double, double> point4);
}

#endif

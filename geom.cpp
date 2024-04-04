#include "geom.h"
#include <cmath>

namespace geometry {
    bool isTriangle(std::tuple<double, double> point1, std::tuple<double, double> point2, std::tuple<double, double> point3) {
        double side1 = std::sqrt(std::pow(std::get<0>(point2) - std::get<0>(point1), 2) +
                                 std::pow(std::get<1>(point2) - std::get<1>(point1), 2));
        double side2 = std::sqrt(std::pow(std::get<0>(point3) - std::get<0>(point2), 2) +
                                 std::pow(std::get<1>(point3) - std::get<1>(point2), 2));
        double side3 = std::sqrt(std::pow(std::get<0>(point1) - std::get<0>(point3), 2) +
                                 std::pow(std::get<1>(point1) - std::get<1>(point3), 2));

        return side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1;
    }

    bool isQuadrilateralTriangle(std::tuple<double, double> point1, std::tuple<double, double> point2, std::tuple<double, double> point3, std::tuple<double, double> point4) {
        return isTriangle(point1, point2, point3) || isTriangle(point1, point2, point4) || isTriangle(point1, point3, point4) || isTriangle(point2, point3, point4);
    }
}

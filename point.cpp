#include "point.h"
#include "geom.h"
#include <string>

namespace geometry {
    Point::Point(std::tuple<double, double> point1, std::tuple<double, double> point2,
                 std::tuple<double, double> point3, std::tuple<double, double> point4,
                 std::tuple<double, double> point5, std::tuple<double, double> point6,
                 std::tuple<double, double> point7) {
        setPoints(point1, point2, point3, point4, point5, point6, point7);
    }
    void Point::setPoints(std::tuple<double, double> p1, std::tuple<double, double> p2, std::tuple<double, double> p3,
                          std::tuple<double, double> p4, std::tuple<double, double> p5, std::tuple<double, double> p6, std::tuple<double, double>p7) {
        trPoints = {p1, p2, p3};
        qdPoints = {p4, p5, p6, p7};
    }

    Triangle::Triangle(std::tuple<double, double> x1, std::tuple<double, double> x2, std::tuple<double, double> x3) {
        setPoints(x1, x2, x3);
    }
    void Triangle::setPoints(std::tuple<double, double> x1, std::tuple<double, double> x2, std::tuple<double, double> x3) {
        p1 = x1;
        p2 = x2;
        p3 = x3;
    }
    bool Triangle::checkTriangle() {
        double side1 = std::sqrt(std::pow(std::get<0>(p2) - std::get<0>(p1), 2) +
                                 std::pow(std::get<1>(p2) - std::get<1>(p1), 2));
        double side2 = std::sqrt(std::pow(std::get<0>(p3) - std::get<0>(p2), 2) +
                                 std::pow(std::get<1>(p3) - std::get<1>(p2), 2));
        double side3 = std::sqrt(std::pow(std::get<0>(p1) - std::get<0>(p3), 2) +
                                 std::pow(std::get<1>(p1) - std::get<1>(p3), 2));

        return side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1;
    }
}
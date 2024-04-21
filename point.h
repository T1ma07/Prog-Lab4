#ifndef POINT_H
#define POINT_H
#include <string>
#include <iostream>
#include <cmath>
#include <tuple>
#include <array>

namespace geometry {
    class Point {
    public:

        std::array<std::tuple<double, double>, 3> trPoints;
        std::array<std::tuple<double, double>, 4> qdPoints;

        Point(std::tuple<double, double> point1, std::tuple<double, double> point2, std::tuple<double, double> point3,
              std::tuple<double, double> point4, std::tuple<double, double> point5, std::tuple<double, double> point6, std::tuple<double, double> point7);
        void setPoints(std::tuple<double, double> p1, std::tuple<double, double> p2, std::tuple<double, double> p3,
                       std::tuple<double, double> p4, std::tuple<double, double> p5, std::tuple<double, double> p6, std::tuple<double, double>p7);
        double trArea(std::tuple<double, double> p1, std::tuple<double, double> p2, std::tuple<double, double> p3);
        bool areEqual(double a, double b, double epsilon = 1e-6);
        void isQuadrilateralInTriangle();
    };
}


#endif

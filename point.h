#ifndef GEOM_H
#define GEOM_H
#include <string>
#include <iostream>

#include <tuple>
#include <array>

class Point {
public:
    Point(std::tuple<double, double> point1, std::tuple<double, double> point2, std::tuple<double, double> point3,
          std::tuple<double, double> point4, std::tuple<double, double> point5, std::tuple<double, double> point6, std::tuple<double, double> point7) {
        setPoints(point1, point2, point3, point4, point5, point6, point7);
    }
    void setPoints(std::tuple<double, double> p1, std::tuple<double, double> p2, std::tuple<double, double> p3,
                   std::tuple<double, double> p4, std::tuple<double, double> p5, std::tuple<double, double> p6, std::tuple<double, double>p7) {
        trPoints = {p1, p2, p3};
        qdPoints = {p4, p5, p6, p7};
    }
    std::tuple<std::array<std::tuple<double, double>, 3>, std::array<std::tuple<double, double>, 4>> getPoints() {
        return std::make_tuple(trPoints, qdPoints);
    }
private:
    std::array<std::tuple<double, double>, 3> trPoints;
    std::array<std::tuple<double, double>, 4> qdPoints;
};

#endif

#ifndef GEOM_H
#define GEOM_H
#include <string>

#include <tuple>

namespace geometry {
    bool isTriangle(std::tuple<double, double> point1, std::tuple<double, double> point2, std::tuple<double, double> point3);
    bool isQuadrilateral(std::tuple<double, double> point1, std::tuple<double, double> point2, std::tuple<double, double> point3, std::tuple<double, double> point4);
    std::string returnTriangle(std::tuple<double, double> point1, std::tuple<double, double> point2, std::tuple<double, double> point3);
    std::string returnQuadrilateral(std::tuple<double, double> point1, std::tuple<double, double> point2, std::tuple<double, double> point3,
                                    std::tuple<double, double> point4);
    bool isQuadrilateralInTriangle(std::tuple<double, double> A, std::tuple<double, double> B, std::tuple<double, double> C, std::tuple<double, double> D,
                                   std::tuple<double, double> P, std::tuple<double, double> Q, std::tuple<double, double> R);
    double triangleArea(std::tuple<double, double> P, std::tuple<double, double> Q, std::tuple<double, double> R);
}

#endif

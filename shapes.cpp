#include "shapes.h"
#include "print.h"
#include <string>
#include <iostream>
#include <cmath>

namespace geometry {
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
    void Triangle::returnTriangle() {
        bool is_triangle = checkTriangle();
        if (is_triangle) {
            std::cout << "The points form a triangle." << std::endl;
        } else {
            std::cout << "The points do not form a triangle. Try again" << std::endl;
        }
    }

    Quadrilateral::Quadrilateral(std::tuple<double, double> x1, std::tuple<double, double> x2,
                                 std::tuple<double, double> x3, std::tuple<double, double> x4) {
        setPoints(x1, x2, x3, x4);
    }
    void Quadrilateral::setPoints(std::tuple<double, double> x1, std::tuple<double, double> x2,
                                  std::tuple<double, double> x3, std::tuple<double, double> x4) {
        p1 = x1;
        p2 = x2;
        p3 = x3;
        p4 = x4;
    }
    bool Quadrilateral::checkQuadrilateral() {
        double side1 = std::sqrt(std::pow(std::get<0>(p2) - std::get<0>(p1), 2) +
                                 std::pow(std::get<1>(p2) - std::get<1>(p1), 2));
        double side2 = std::sqrt(std::pow(std::get<0>(p3) - std::get<0>(p2), 2) +
                                 std::pow(std::get<1>(p3) - std::get<1>(p2), 2));
        double side3 = std::sqrt(std::pow(std::get<0>(p4) - std::get<0>(p3), 2) +
                                 std::pow(std::get<1>(p4) - std::get<1>(p3), 2));
        double side4 = std::sqrt(std::pow(std::get<0>(p1) - std::get<0>(p4), 2) +
                                 std::pow(std::get<1>(p1) - std::get<1>(p4), 2));

        double diagonal1 = std::sqrt(std::pow(std::get<0>(p3) - std::get<0>(p1), 2) +
                                     std::pow(std::get<1>(p3) - std::get<1>(p1), 2));
        double diagonal2 = std::sqrt(std::pow(std::get<0>(p4) - std::get<0>(p2), 2) +
                                     std::pow(std::get<1>(p4) - std::get<1>(p2), 2));

        return side1 + side2 + side3 > side4 &&
               side1 + side3 + side4 > side2 &&
               side1 + side2 + side4 > side3 &&
               side2 + side3 + side4 > side1 &&
               diagonal1 + diagonal2 > side1 &&
               diagonal1 + diagonal2 > side2 &&
               diagonal1 + diagonal2 > side3 &&
               diagonal1 + diagonal2 > side4;
    }
    void Quadrilateral::returnQuadrilateral() {
        bool is_quadrilateral = checkQuadrilateral();
        if (is_quadrilateral) {
            std::cout << "The points form a quadrilateral." << std::endl;
        } else {
            std::cout << "The points do not form a quadrilateral. Try again" << std::endl;
        }
    }
}
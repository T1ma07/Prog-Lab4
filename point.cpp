#include "point.h"
#include <string>

namespace geometry {
    Point::Point(std::tuple<double, double> point1, std::tuple<double, double> point2,
                 std::tuple<double, double> point3, std::tuple<double, double> point4,
                 std::tuple<double, double> point5, std::tuple<double, double> point6,
                 std::tuple<double, double> point7) {
        setPoints(point1, point2, point3, point4, point5, point6, point7);
    }
    // Встановлення точок як аргументів
    void Point::setPoints(std::tuple<double, double> p1, std::tuple<double, double> p2, std::tuple<double, double> p3,
                          std::tuple<double, double> p4, std::tuple<double, double> p5, std::tuple<double, double> p6, std::tuple<double, double>p7) {
        trPoints = {p1, p2, p3};
        qdPoints = {p4, p5, p6, p7};
    }
    // Обчислення площі трикутника
    double Point::trArea(std::tuple<double, double> P, std::tuple<double, double> Q, std::tuple<double, double> R) {
        double PQ = sqrt(pow(std::get<0>(Q) - std::get<0>(P), 2) + pow(std::get<1>(Q) - std::get<1>(P), 2));
        double QR = sqrt(pow(std::get<0>(R) - std::get<0>(Q), 2) + pow(std::get<1>(R) - std::get<1>(Q), 2));
        double PR = sqrt(pow(std::get<0>(R) - std::get<0>(P), 2) + pow(std::get<1>(R) - std::get<1>(P), 2));

        double p = (PQ + QR + PR)/2;

        double S = sqrt(p * (p - PQ) * (p - QR) * (p - PR));

        return S;
    }
    //Додаткова функція для прирівнювання символів після коми
    bool Point::areEqual(double a, double b, double epsilon) {
        return fabs(a - b) < epsilon;
    }
    // Перевірка належності чотирикутника трикутнику
    void Point::isQuadrilateralInTriangle() {
        std::tuple<double, double> P = std::get<0>(trPoints);
        std::tuple<double, double> Q = std::get<1>(trPoints);
        std::tuple<double, double> R = std::get<2>(trPoints);

        std::tuple<double, double> A = std::get<0>(qdPoints);
        std::tuple<double, double> B = std::get<1>(qdPoints);
        std::tuple<double, double> C = std::get<2>(qdPoints);
        std::tuple<double, double> D = std::get<3>(qdPoints);
        double tr_area = Point::trArea(P, Q, R);

        if (areEqual(tr_area, Point::trArea(P, Q, A) + Point::trArea(P, A, R) + Point::trArea(A, Q, R)) &&
            areEqual(tr_area, Point::trArea(P, Q, B) + Point::trArea(P, B, R) + Point::trArea(B, Q, R)) &&
            areEqual(tr_area, Point::trArea(P, Q, C) + Point::trArea(P, C, R) + Point::trArea(C, Q, R)) &&
            areEqual(tr_area, Point::trArea(P, Q, D) + Point::trArea(P, D, R) + Point::trArea(D, Q, R)))
        {
            std::cout << "Quadrilateral is in triangle!" << std::endl;
        } else {
            std::cout << "Quadrilateral isn't in triangle!" << std::endl;
        }
    }
}
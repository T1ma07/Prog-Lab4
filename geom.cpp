#include "geom.h"
#include <string>
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

    bool isQuadrilateral(std::tuple<double, double> point1, std::tuple<double, double> point2, std::tuple<double, double> point3, std::tuple<double, double> point4) {
        double side1 = std::sqrt(std::pow(std::get<0>(point2) - std::get<0>(point1), 2) +
                                 std::pow(std::get<1>(point2) - std::get<1>(point1), 2));
        double side2 = std::sqrt(std::pow(std::get<0>(point3) - std::get<0>(point2), 2) +
                                 std::pow(std::get<1>(point3) - std::get<1>(point2), 2));
        double side3 = std::sqrt(std::pow(std::get<0>(point4) - std::get<0>(point3), 2) +
                                 std::pow(std::get<1>(point4) - std::get<1>(point3), 2));
        double side4 = std::sqrt(std::pow(std::get<0>(point1) - std::get<0>(point4), 2) +
                                 std::pow(std::get<1>(point1) - std::get<1>(point4), 2));

        double diagonal1 = std::sqrt(std::pow(std::get<0>(point3) - std::get<0>(point1), 2) +
                                     std::pow(std::get<1>(point3) - std::get<1>(point1), 2));
        double diagonal2 = std::sqrt(std::pow(std::get<0>(point4) - std::get<0>(point2), 2) +
                                     std::pow(std::get<1>(point4) - std::get<1>(point2), 2));

        return side1 + side2 + side3 > side4 &&
               side1 + side3 + side4 > side2 &&
               side1 + side2 + side4 > side3 &&
               side2 + side3 + side4 > side1 &&
               diagonal1 + diagonal2 > side1 &&
               diagonal1 + diagonal2 > side2 &&
               diagonal1 + diagonal2 > side3 &&
               diagonal1 + diagonal2 > side4;
    }

    std::string returnTriangle(std::tuple<double, double> point1, std::tuple<double, double> point2, std::tuple<double, double> point3) {
        bool is_triangle = isTriangle(point1, point2, point3);
        std::string print;
        if (is_triangle) {
            print = "The points form a triangle.";
        } else {
            print = "The points do not form a triangle. Try again";
        }
        return print;
    }

    std::string returnQuadrilateral(std::tuple<double, double> point1, std::tuple<double, double> point2, std::tuple<double, double> point3, std::tuple<double, double> point4) {
        bool is_quadrilateral = isQuadrilateral(point1, point2, point3, point4);
        std::string print;
        if (is_quadrilateral) {
            print = "The points form a quadrilateral.";
        } else {
            print = "The points do not form a quadrilateral. Try again";
        }
        return print;
    }

    double triangleArea(std::tuple<double, double> P, std::tuple<double, double> Q, std::tuple<double, double> R) {
        double PQ = sqrt(pow(std::get<0>(Q) - std::get<0>(P), 2) + pow(std::get<1>(Q) - std::get<1>(P), 2));
        double QR = sqrt(pow(std::get<0>(R) - std::get<0>(Q), 2) + pow(std::get<1>(R) - std::get<1>(Q), 2));
        double PR = sqrt(pow(std::get<0>(R) - std::get<0>(P), 2) + pow(std::get<1>(R) - std::get<1>(P), 2));

        double p = (PQ + QR + PR)/2;

        double S = sqrt(p * (p - PQ) * (p - QR) * (p - PR));

        return S;
    };

    bool isQuadrilateralInTriangle(std::tuple<double, double> A, std::tuple<double, double> B, std::tuple<double, double> C, std::tuple<double, double> D,
                                   std::tuple<double, double> P, std::tuple<double, double> Q, std::tuple<double, double> R) {
        bool a, b, c, d = false;

        double S_triangle = triangleArea(P, Q, R);

        double S_quadrilateralA_1 = triangleArea(P, Q, A);
        double S_quadrilateralA_2 = triangleArea(P, A, R);
        double S_quadrilateralA_3 = triangleArea(A, Q, R);

        if (S_triangle == S_quadrilateralA_1 + S_quadrilateralA_2 + S_quadrilateralA_3) {
            a = true;
        } else {
            return false;
        }

        double S_quadrilateralB_1 = triangleArea(P, Q, B);
        double S_quadrilateralB_2 = triangleArea(P, B, R);
        double S_quadrilateralB_3 = triangleArea(B, Q, R);

        if (S_triangle == S_quadrilateralB_1 + S_quadrilateralB_2 + S_quadrilateralB_3) {
            b = true;
        } else {
            return false;
        }

        double S_quadrilateralC_1 = triangleArea(P, Q, C);
        double S_quadrilateralC_2 = triangleArea(P, C, R);
        double S_quadrilateralC_3 = triangleArea(C, Q, R);

        if (S_triangle == S_quadrilateralC_1 + S_quadrilateralC_2 + S_quadrilateralC_3) {
            c = true;
        } else {
            return false;
        }

        double S_quadrilateralD_1 = triangleArea(P, Q, D);
        double S_quadrilateralD_2 = triangleArea(P, D, R);
        double S_quadrilateralD_3 = triangleArea(D, Q, R);

        if (S_triangle == S_quadrilateralD_1 + S_quadrilateralD_2 + S_quadrilateralD_3) {
            d = true;
        } else {
            return false;
        }

        return a && b && c && d;
    }
}

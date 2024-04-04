#include <iostream>
#include "print.h"

namespace logging {
    void printAuthorInfo() {
        std::cout << "Creator: Sotnikov Tymur" << std::endl;
        std::cout << "Group: K-14" << std::endl;
    }

    void printTaskInfo() {
        std::cout << "Task: check if quadrilateral fits in the triangle" << std::endl << "------------------------------" << std::endl;
    }
}

namespace input_geom {
    std::tuple<double, double> inputTriangle1() {
        double tr_point1_x, tr_point1_y;

        std::cout << "Enter first point of triangle (x, y):" << std::endl;
        std::cin >> tr_point1_x >> tr_point1_y;

        std::tuple<double, double> tr_point1 = std::make_tuple(tr_point1_x, tr_point1_y);

        return tr_point1;
    }

    std::tuple<double, double> inputTriangle2() {
        double tr_point2_x, tr_point2_y;

        std::cout << "Enter second point of triangle (x, y):" << std::endl;
        std::cin >> tr_point2_x >> tr_point2_y;

        std::tuple<double, double> tr_point2 = std::make_tuple(tr_point2_x, tr_point2_y);

        return tr_point2;
    }

    std::tuple<double, double> inputTriangle3() {
        double tr_point3_x, tr_point3_y;

        std::cout << "Enter third point of triangle (x, y):" << std::endl;
        std::cin >> tr_point3_x >> tr_point3_y;

        std::tuple<double, double> tr_point3 = std::make_tuple(tr_point3_x, tr_point3_y);

        return tr_point3;
    }
}
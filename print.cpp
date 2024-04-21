#include <iostream>
#include <sstream>
#include "print.h"

namespace logging {
    void Log::printAuthorInfo() {
        std::cout << "Creator: Sotnikov Tymur" << std::endl;
        std::cout << "Group: K-14" << std::endl;
    }

    void Log::printTaskInfo() {
        std::cout << "Task: check if quadrilateral fits in the triangle" << std::endl << "------------------------------" << std::endl;
    }

    std::tuple<double, double> inputTriangle1() {
        double tr_point1_x, tr_point1_y;

        std::cout << "Enter first point of triangle (x, y) separated by space:" << std::endl;
        std::string input_line;
        std::getline(std::cin, input_line);

        std::istringstream iss(input_line);
        iss >> tr_point1_x >> tr_point1_y;

        std::tuple<double, double> tr_point1 = std::make_tuple(tr_point1_x, tr_point1_y);

        return tr_point1;
    }

    std::tuple<double, double> inputTriangle2() {
        double tr_point2_x, tr_point2_y;

        std::cout << "Enter second point of triangle (x, y) separated by space:" << std::endl;
        std::string input_line;
        std::getline(std::cin, input_line);

        std::istringstream iss(input_line);
        iss >> tr_point2_x >> tr_point2_y;

        std::tuple<double, double> tr_point2 = std::make_tuple(tr_point2_x, tr_point2_y);

        return tr_point2;
    }

    std::tuple<double, double> inputTriangle3() {
        double tr_point3_x, tr_point3_y;

        std::cout << "Enter third point of triangle (x, y) separated by space:" << std::endl;
        std::string input_line;
        std::getline(std::cin, input_line);

        std::istringstream iss(input_line);
        iss >> tr_point3_x >> tr_point3_y;

        std::tuple<double, double> tr_point3 = std::make_tuple(tr_point3_x, tr_point3_y);

        return tr_point3;
    }

    std::tuple<double, double> inputQuadrilateral1() {
        double q_point1_x, q_point1_y;

        std::cout << "Enter first point of quadrilateral (x, y) separated by space:" << std::endl;
        std::string input_line;
        std::getline(std::cin, input_line);

        std::istringstream iss(input_line);
        iss >> q_point1_x >> q_point1_y;

        std::tuple<double, double> q_point1 = std::make_tuple(q_point1_x, q_point1_y);

        return q_point1;
    }

    std::tuple<double, double> inputQuadrilateral2() {
        double q_point2_x, q_point2_y;

        std::cout << "Enter second point of quadrilateral (x, y) separated by space:" << std::endl;
        std::string input_line;
        std::getline(std::cin, input_line);

        std::istringstream iss(input_line);
        iss >> q_point2_x >> q_point2_y;

        std::tuple<double, double> q_point2 = std::make_tuple(q_point2_x, q_point2_y);

        return q_point2;
    }

    std::tuple<double, double> inputQuadrilateral3() {
        double q_point3_x, q_point3_y;

        std::cout << "Enter third point of quadrilateral (x, y) separated by space:" << std::endl;
        std::string input_line;
        std::getline(std::cin, input_line);

        std::istringstream iss(input_line);
        iss >> q_point3_x >> q_point3_y;

        std::tuple<double, double> q_point3 = std::make_tuple(q_point3_x, q_point3_y);

        return q_point3;
    }

    std::tuple<double, double> inputQuadrilateral4() {
        double q_point4_x, q_point4_y;

        std::cout << "Enter fourth point of quadrilateral (x, y) separated by space:" << std::endl;
        std::string input_line;
        std::getline(std::cin, input_line);

        std::istringstream iss(input_line);
        iss >> q_point4_x >> q_point4_y;

        std::tuple<double, double> q_point4 = std::make_tuple(q_point4_x, q_point4_y);

        return q_point4;}
}
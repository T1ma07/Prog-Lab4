#include <iostream>
#include <sstream>
#include "print.h"
#include <array>

namespace logging {
    void Log::printAuthorInfo() {
        std::cout << "Creator: Sotnikov Tymur" << std::endl;
        std::cout << "Group: K-14" << std::endl;
    }

    void Log::printTaskInfo() {
        std::cout << "Task: check if quadrilateral fits in the triangle" << std::endl
                  << "------------------------------" << std::endl;
    }

    void Log::printEnd() {
        std::cout << "Task completed." << std::endl;
    }

    std::array<std::tuple<double, double>, 3> inputTriangle() {
        double tr_point1_x, tr_point1_y, tr_point2_x, tr_point2_y, tr_point3_x, tr_point3_y;

        std::cout << "Enter first point of triangle (x, y) separated by space:" << std::endl;
        std::string input_line;
        std::getline(std::cin, input_line);

        std::istringstream iss(input_line);
        iss >> tr_point1_x >> tr_point1_y;

        std::tuple<double, double> tr_point1 = std::make_tuple(tr_point1_x, tr_point1_y);

        std::cout << "Enter second point of triangle (x, y) separated by space:" << std::endl;
        std::string input_line2;
        std::getline(std::cin, input_line);

        std::istringstream iss2(input_line);
        iss2 >> tr_point2_x >> tr_point2_y;

        std::tuple<double, double> tr_point2 = std::make_tuple(tr_point2_x, tr_point2_y);

        std::cout << "Enter third point of triangle (x, y) separated by space:" << std::endl;
        std::string input_line3;
        std::getline(std::cin, input_line);

        std::istringstream iss3(input_line);
        iss3 >> tr_point3_x >> tr_point3_y;

        std::tuple<double, double> tr_point3 = std::make_tuple(tr_point3_x, tr_point3_y);

        return {tr_point1, tr_point2, tr_point3};
    }

    std::array<std::tuple<double, double>, 4> inputQuadrilateral() {
        double q_point1_x, q_point1_y, q_point2_x, q_point2_y, q_point3_x, q_point3_y, q_point4_x, q_point4_y;

        std::cout << "Enter first point of quadrilateral (x, y) separated by space:" << std::endl;
        std::string input_line;
        std::getline(std::cin, input_line);

        std::istringstream iss(input_line);
        iss >> q_point1_x >> q_point1_y;

        std::tuple<double, double> q_point1 = std::make_tuple(q_point1_x, q_point1_y);

        std::cout << "Enter second point of quadrilateral (x, y) separated by space:" << std::endl;
        std::string input_line2;
        std::getline(std::cin, input_line);

        std::istringstream iss2(input_line);
        iss2 >> q_point2_x >> q_point2_y;

        std::tuple<double, double> q_point2 = std::make_tuple(q_point2_x, q_point2_y);

        std::cout << "Enter third point of quadrilateral (x, y) separated by space:" << std::endl;
        std::string input_line3;
        std::getline(std::cin, input_line);

        std::istringstream iss3(input_line);
        iss3 >> q_point3_x >> q_point3_y;

        std::tuple<double, double> q_point3 = std::make_tuple(q_point3_x, q_point3_y);

        std::cout << "Enter fourth point of quadrilateral (x, y) separated by space:" << std::endl;
        std::string input_line4;
        std::getline(std::cin, input_line);

        std::istringstream iss4(input_line);
        iss4 >> q_point4_x >> q_point4_y;

        std::tuple<double, double> q_point4 = std::make_tuple(q_point4_x, q_point4_y);

        return {q_point1, q_point2, q_point3, q_point4};
    }
}
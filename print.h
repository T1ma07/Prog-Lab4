#pragma once
#ifndef PRINT_H
#define PRINT_H
#include <array>

namespace logging { // Простір імен для виводу інформації
    struct Log {
        static void printAuthorInfo();
        static void printTaskInfo();
        static void printEnd();
    };
    std::array<std::tuple<double, double>, 3> inputTriangle();
    std::array<std::tuple<double, double>, 4> inputQuadrilateral();
}

#endif
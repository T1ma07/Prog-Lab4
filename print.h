#ifndef PRINT_H
#define PRINT_H

namespace logging {
    void printAuthorInfo();
    void printTaskInfo();
}

namespace input_geom {
    std::tuple<double, double> inputTriangle1();
    std::tuple<double, double> inputTriangle2();
    std::tuple<double, double> inputTriangle3();

    std::tuple<double, double> inputQuadrilateral1();
    std::tuple<double, double> inputQuadrilateral2();
    std::tuple<double, double> inputQuadrilateral3();
    std::tuple<double, double> inputQuadrilateral4();
}

#endif
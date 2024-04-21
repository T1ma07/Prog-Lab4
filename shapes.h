#ifndef GEOM_H
#define GEOM_H
#include <string>
#include <tuple>
#include "point.h"

namespace geometry { // файл з класами Triangle та Quadrilateral
    class Triangle {
    private:
        std::tuple<double, double> p1;
        std::tuple<double, double> p2;
        std::tuple<double, double> p3;

    public:
        Triangle(std::tuple<double, double> x1, std::tuple<double, double> x2, std::tuple<double, double> x3);
        void setPoints(std::tuple<double, double> x1, std::tuple<double, double> x2, std::tuple<double, double> x3);
        bool checkTriangle();
        void returnTriangle();
    };

    class Quadrilateral {
    private:
        std::tuple<double, double> p1;
        std::tuple<double, double> p2;
        std::tuple<double, double> p3;
        std::tuple<double, double> p4;

    public:
        Quadrilateral(std::tuple<double, double> x1, std::tuple<double, double> x2, std::tuple<double, double> x3, std::tuple<double, double> x4);
        void setPoints(std::tuple<double, double> x1, std::tuple<double, double> x2, std::tuple<double, double> x3, std::tuple<double, double> x4);
        bool checkQuadrilateral();
        void returnQuadrilateral();
    };
}

#endif

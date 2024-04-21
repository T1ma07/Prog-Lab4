#ifndef SHAPE_H
#define SHAPE_H
#include <string>
#include <tuple>

namespace geometry {
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

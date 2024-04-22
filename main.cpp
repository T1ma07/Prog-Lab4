#include "print.h"
#include "point.h"
#include "shapes.h"
#include <array>

int main() {

    // Функції виведення інформації
    logging::Log::printAuthorInfo();
    logging::Log::printTaskInfo();

    // Допоміжні змінні
    bool triangleCompleted;
    bool quadrilateralCompleted;

    // Масиви з точками фігур, поданими у вигляді кортежу
    std::array<std::tuple<double, double>, 3> tr_point;
    std::array<std::tuple<double, double>, 4> q_point;

    // Оголошення класів фігур з вказівниками
    geometry::Triangle* trianglePtr = nullptr;
    geometry::Quadrilateral* quadrilateralPtr = nullptr;

    do { // Цикл, що виконуватиметься доти, доки точки трикутника будуть введені правильно
        tr_point = logging::inputTriangle();
        trianglePtr = new geometry::Triangle(std::get<0>(tr_point), std::get<1>(tr_point), std::get<2>(tr_point));
        bool isTriangle = trianglePtr->returnTriangle();

        if (isTriangle) {
            triangleCompleted = true;
        }
    } while (!triangleCompleted);

    // Цикл, що виконуватиметься доти, доки точки чотирикутника будуть введені правильно
    do {
        q_point = logging::inputQuadrilateral();
        quadrilateralPtr = new geometry::Quadrilateral(std::get<0>(q_point), std::get<1>(q_point), std::get<2>(q_point), std::get<3>(q_point));
        bool isQuadrilateral = quadrilateralPtr->returnQuadrilateral();

        if (isQuadrilateral) {
            quadrilateralCompleted = true;
        }
    } while (!quadrilateralCompleted);

    // Клас точки, який перевірятиме належність фігур
    geometry::Point point(std::get<0>(tr_point), std::get<1>(tr_point), std::get<2>(tr_point),
            std::get<0>(q_point), std::get<1>(q_point),std::get<2>(q_point), std::get<3>(q_point));

    point.isQuadrilateralInTriangle(); // Перевірка, чи належить чотирикутник трикутнику

    logging::Log::printEnd(); // Виводимо повідомлення про завершення роботи програми

    return 0;
}

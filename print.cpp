#include <iostream>
#include "print.h"

namespace logging {
    void printAuthorInfo() {
        std::cout << "Creator: Sotnikov Tymur" << std::endl;
        std::cout << "Group: K-14" << std::endl;
    }

    void printTaskInfo() {
        std::cout << "Task: check if quadrilateral fits in the triangle" << std::endl << std::endl;
    }
}

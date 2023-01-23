#include <iostream>
#include "local_library.h"

void local_library::do_something() {
    std::cout << "I'm doing something!" << std::endl;
}

int local_library::add(int a, int b) {
    return a + b;
}
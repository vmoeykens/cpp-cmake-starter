#include <iostream>
#include <cassert>
#include "../lib/local_library.h"

int main() {
    std::cout << "Running tests..." << std::endl;
    assert(local_library::add(1, 2) == 3);
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
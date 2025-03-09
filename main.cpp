#include <iostream>
#include"nes.h"
#include "mapper.h"

int main() {
    Mapper00 m;
    Nes nes(&m);
    nes.cpu_test();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

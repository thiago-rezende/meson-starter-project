/**
 * @file main.cpp
 * @author Thiago Rezende (bitrateti@gmail.com)
 * @brief Application entry point
 * @version 0.1
 * @date 2020-06-18
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <iostream>

#include "horus.h"

int main(int argc, char **argv)
{
    std::cout << "Hello Meson!" << std::endl;
    horus::greet("Meson");
    return 0;
}

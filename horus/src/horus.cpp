/**
 * @file horus.h
 * @author Thiago Rezende (bitrateti@gmail.com)
 * @brief Horus Lib source file
 * @version 0.1
 * @date 2020-06-18
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "horus.h"

namespace horus
{
    void greet(const char *name)
    {
        std::cout << "[HORUS]: Hello " << name << std::endl;
    }

    int get_one()
    {
        return 1;
    }
} // namespace horus

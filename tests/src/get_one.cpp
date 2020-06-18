#include <stdio.h>

#include "horus.h"

/**
 * @brief Test fails if the return is not 0
 *
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char **argv)
{
    int check = horus::get_one();

    if (check != 1)
    {
        fprintf(stderr, "Greet did not return 1");
        return 1;
    }

    return 0;
}

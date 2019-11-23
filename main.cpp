#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <string>
#include <stdlib.h>     /* srand, rand */

#include "sfml_vars.h"
#include "random_move.h"
#include "input.h"
#include "draw.h"
#include "spore_life_cycle.h"
#include "main_loop.h"
#include "seed_input.h"

int main()
{
    main_loop();

    return 0;
}

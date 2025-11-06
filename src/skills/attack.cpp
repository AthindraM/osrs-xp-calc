#include "../../include/skills/attack.hpp"
#include <iostream>
#include <cmath>

void Attack::calculate(int xp) {
    int damage_needed = xp / DAMAGE;

    std::cout << "You would need to deal\n"
        "\t" << damage_needed << " more damage\n"
        "to level up. Happy grinding!";
}


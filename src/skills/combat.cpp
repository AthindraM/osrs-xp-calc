#include "../../include/skills/combat.hpp"
#include <iostream>
#include <cmath>

void Combat::calculate(int xp) {
    int damage_needed = xp / DAMAGE;

    std::cout << "You would need to deal\n"
        "\t" << damage_needed << " more damage\n"
        "to level up. Happy grinding!";
}


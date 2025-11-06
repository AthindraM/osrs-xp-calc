#include <iostream>
#include "../include/skills/woodcutting.hpp"
#include "../include/skills/firemaking.hpp"
#include "../include/skills/mining.hpp"
#include "../include/skills/prayer.hpp"

int main() {
    std::cout <<
        "============================================\n"
        "==== Welcome to the OSRS XP Calculator! ====\n"
        "============================================\n";

    std::cout <<
            "What skill would you like to calculate?\n"
            "\t[1] Woodcutting\n"
            "\t[2] Firemaking\n"
            "\t[3] Mining\n"
            "\t[4] Prayer\n"
            "\t(more skills coming soon!)\n";
    int skill_choice{};
    std::cin >> skill_choice;

    std::cout << "How much more XP do you need to get to the next level?\n";
    int more_xp{};
    std::cin >> more_xp;

    switch (skill_choice) {
        case 1: {
            Woodcutting skill;
            skill.calculate(more_xp);
            break;
        }
        case 2: {
            Firemaking skill;
            skill.calculate(more_xp);
            break;
        }
        case 3: {
            Mining skill;
            skill.calculate(more_xp);
            break;
        }
        case 4: {
            Prayer skill;
            skill.calculate(more_xp);
            break;
        }
        default:
            std::cout << "Not a valid skill choice!\n";
            break;
    }
}

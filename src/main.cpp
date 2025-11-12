#include <iostream>
#include "../include/skills/woodcutting.hpp"
#include "../include/skills/firemaking.hpp"
#include "../include/skills/mining.hpp"
#include "../include/skills/prayer.hpp"
#include "../include/skills/combat.hpp"

int main() {
    std::cout <<
        "============================================\n"
        "==== Welcome to the OSRS XP Calculator! ====\n"
        "============================================\n";

    std::cout <<
            "What skill would you like to calculate?\n"
            "\t[1] Woodcutting  |   [6] Strength\n"
            "\t[2] Firemaking   |   [7] Defense\n"
            "\t[3] Mining       |   [8] Ranged\n"
            "\t[4] Prayer       |   [9] Magic\n"
            "\t[5] Attack       |\n"
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
        case 5: {
            Combat skill;
            skill.calculate(more_xp);
        }
        case 6: {
            Combat skill;
            skill.calculate(more_xp);
        }
        case 7: {
            Combat skill;
            skill.calculate(more_xp);
        }
        case 8: {
            Combat skill;
            skill.calculate(more_xp);
        }
        default:
            std::cout << "Not a valid skill choice!\n";
            break;
    }
}

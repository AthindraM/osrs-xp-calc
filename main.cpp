#include <iostream>
#include "woodcutting.hpp"
#include "firemaking.hpp"

class Mining {
private:
    const int CLAY{5};
    const int RUNE_ESSENCE{5};
    const double COPPER{17.5};
    const double TIN{17.5};

public:
    void calculate(int xp) {
        int clay_needed = xp / CLAY;
        int rune_essence_needed = xp / RUNE_ESSENCE;
        int copper_needed = static_cast<int>(std::ceil(xp / COPPER));
        int tin_needed = static_cast<int>(std::ceil(xp / TIN));

        std::cout << "You would need to mine:\n"
            "\t" << clay_needed << " more clay\n"
            "\t" << rune_essence_needed << " more rune essence\n"
            "\t" << copper_needed << " more copper\n"
            "\t" << tin_needed << " more tin\n"
            "to level up. Happy grinding!\n";
    }
};

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
        default:
            std::cout << "Not a valid skill choice!\n";
            break;
    }
}
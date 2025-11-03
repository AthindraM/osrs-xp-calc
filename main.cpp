#include <iostream>

class Woodcutting {
private:
    const double LOG{25};
    const double OAK_LOG{37.5};
    const double WILLOW_LOG{67.5};
public:
    void calculate(int xp) {
        int logs_needed = static_cast<int>(std::ceil(xp / LOG));
        int oak_logs_needed = static_cast<int>(std::ceil(xp / OAK_LOG));
        int willow_logs_needed = static_cast<int>(std::ceil(xp / WILLOW_LOG));
        std::cout <<
            "You would need:\n"
            "\t" << logs_needed << " more logs\n"
            "\t" << oak_logs_needed << " more oak logs\n"
            "\t" << willow_logs_needed << " more willow logs\n"
            "to level up. Happy grinding!\n";
    }
};

void firemaking(int xp) {
    std::cout << "firemaking!";
}

int main() {
    std::cout <<
        "============================================\n"
        "==== Welcome to the OSRS XP Calculator! ====\n"
        "============================================\n";

    std::cout <<
            "What skill would you like to calculate?\n"
            "\t[1] Woodcutting\n"
            "\t[2] Firemaking\n"
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
        case 2:
            firemaking(more_xp);
            break;
        default:
            std::cout << "Not a valid skill choice!\n";
            break;
    }
}
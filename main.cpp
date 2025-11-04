#include <iostream>

class Woodcutting {
private:
    const int LOG{25};
    const double OAK_LOG{37.5};
    const double WILLOW_LOG{67.5};
    const int MAPLE_LOG{100};
    const int YEW_LOG{175};
    const int MAGIC_LOG{250};
    const int REDWOOD_LOG{380};
public:
    void calculate(int xp) {
        int logs_needed = xp / LOG;
        int oak_logs_needed = static_cast<int>(std::ceil(xp / OAK_LOG));
        int willow_logs_needed = static_cast<int>(std::ceil(xp / WILLOW_LOG));
        int maple_logs_needed = xp / MAPLE_LOG;
        int yew_logs_needed = xp / YEW_LOG;
        int magic_logs_needed = xp / MAGIC_LOG;
        int redwood_logs_needed = xp / REDWOOD_LOG;
        std::cout <<
            "You would need to chop:\n"
            "\t" << logs_needed << " more logs\n"
            "\t" << oak_logs_needed << " more oak logs\n"
            "\t" << willow_logs_needed << " more willow logs\n"
            "\t" << maple_logs_needed << " more maple logs\n"
            "\t" << yew_logs_needed << " more yew logs\n"
            "\t" << magic_logs_needed << " more magic logs\n"
            "\t" << redwood_logs_needed << " more redwood logs\n"
            "to level up. Happy grinding!\n";
    }
};

class Firemaking {
private:
    const int LOG{40};
    const int OAK_LOG{60};
    const int WILLOW_LOG{90};
    const int TEAK_LOG{105};
    const int ARCTIC_PINE_LOG{125};
    const int MAPLE_LOG{135};
    const double MAHOGANY_LOG{157.5};
    const double YEW_LOG{202.5};
    const int BLISTERWOOD_LOG{96};
    const double MAGIC_LOG{303.8};
    const int REDWOOD_LOG{350};

public:
    void calculate(int xp) {
        int logs_needed = xp / LOG;
        int oak_logs_needed = xp / OAK_LOG;
        int willow_logs_needed = xp / WILLOW_LOG;
        int teak_logs_needed = xp / TEAK_LOG;
        int arctic_pine_logs_needed = xp / ARCTIC_PINE_LOG;
        int maple_logs_needed = xp / MAPLE_LOG;
        int mahogany_logs_needed = static_cast<int>(std::ceil(xp / MAGIC_LOG));
        int yew_logs_needed = static_cast<int>(std::ceil(xp / YEW_LOG));
        int blisterwood_logs_needed = xp / BLISTERWOOD_LOG;
        int magic_logs_needed = static_cast<int>(std::ceil(xp / MAGIC_LOG));
        int redwood_logs_needed = xp / REDWOOD_LOG;
        std::cout <<
            "You would need to burn:\n"
            "\t" << logs_needed << " more logs\n"
            "\t" << oak_logs_needed << " more oak logs\n"
            "\t" << willow_logs_needed << " more willow logs\n"
            "\t" << teak_logs_needed << " more teak logs\n"
            "\t" << arctic_pine_logs_needed << " more arctic pine logs\n"
            "\t" << maple_logs_needed << " more maple logs\n"
            "\t" << mahogany_logs_needed << " more mahogany logs\n"
            "\t" << yew_logs_needed << " more yew logs\n"
            "\t" << blisterwood_logs_needed << " more blisterwood logs\n"
            "\t" << magic_logs_needed << " more magic logs\n"
            "\t" << redwood_logs_needed << " more redwood logs\n"
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
        default:
            std::cout << "Not a valid skill choice!\n";
            break;
    }
}
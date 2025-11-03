#include <iostream>

void woodcutting() {
    std::cout << "woodcutting!";
}

void firemaking() {
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

    switch (skill_choice) {
        case 1:
            woodcutting();
            break;
        case 2:
            firemaking();
            break;
        default:
            std::cout << "Not a valid skill choice!\n";
            break;
    }
}
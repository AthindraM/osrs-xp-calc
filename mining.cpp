#include "mining.hpp"
#include <iostream>
#include <cmath>

void Mining::calculate(int xp) {
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
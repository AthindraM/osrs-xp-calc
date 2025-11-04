#include "mining.hpp"
#include <iostream>
#include <cmath>

void Mining::calculate(int xp) {
  int copper_needed = static_cast<int>(std::ceil(xp / COPPER));
  int tin_needed = static_cast<int>(std::ceil(xp / TIN));
  int iron_needed = xp / IRON;
  int silver_needed = xp / SILVER;
  int coal_needed = xp / COAL;
  int gold_needed = xp / GOLD;
  int mithril_needed = xp / MITHRIL;
  int adamantite_needed = xp / ADAMANTITE;
  int runite_needed = xp / RUNITE;

  std::cout << "You would need to mine:\n"
      "\t" << copper_needed << " more copper\n"
      "\t" << tin_needed << " more tin\n"
      "\t" << iron_needed << " more iron\n"
      "\t" << silver_needed << " more silver\n"
      "\t" << coal_needed << " more coal\n"
      "\t" << gold_needed << " more gold\n"
      "\t" << mithril_needed << " more mithril\n"
      "\t" << adamantite_needed << " more adamantite\n"
      "\t" << runite_needed << " more runite\n"
      "to level up. Happy grinding!\n";
}
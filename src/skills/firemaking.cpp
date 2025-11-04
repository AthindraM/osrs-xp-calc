#include "../../include/skills/firemaking.hpp"
#include <iostream>
#include <cmath>

void Firemaking::calculate(int xp) {
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

  std::cout << "You would need to burn:\n"
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

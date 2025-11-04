#include "woodcutting.hpp"
#include <iostream>
#include <cmath>

void Woodcutting::calculate(int xp) {
  int logs_needed = xp / LOG;
  int oak_logs_needed = static_cast<int>(std::ceil(xp / OAK_LOG));
  int willow_logs_needed = static_cast<int>(std::ceil(xp / WILLOW_LOG));
  int maple_logs_needed = xp / MAPLE_LOG;
  int yew_logs_needed = xp / YEW_LOG;
  int magic_logs_needed = xp / MAGIC_LOG;
  int redwood_logs_needed = xp / REDWOOD_LOG;

  std::cout << "You would need to chop:\n"
      "\t" << logs_needed << " more logs\n"
      "\t" << oak_logs_needed << " more oak logs\n"
      "\t" << willow_logs_needed << " more willow logs\n"
      "\t" << maple_logs_needed << " more maple logs\n"
      "\t" << yew_logs_needed << " more yew logs\n"
      "\t" << magic_logs_needed << " more magic logs\n"
      "\t" << redwood_logs_needed << " more redwood logs\n"
      "to level up. Happy grinding!\n";
}
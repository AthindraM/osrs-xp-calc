#include "../../include/skills/prayer.hpp"
#include <iostream>
#include <cmath>

void Prayer::calculate(int xp) {
  int bones_buried_needed = static_cast<int>(std::ceil(xp / bones_buried));
  int big_bones_buried_needed = xp / big_bones_buried;
  int fiendish_ashes_scattered_needed = xp / fiendish_ashes_scattered;
  int vile_ashes_scattered_needed = vile_ashes_scattered;

  std::cout << "You would need to:\n"
      "\tbury " << bones_buried_needed << " more bones\n"
      "\tbury " << big_bones_buried_needed << " more big bones\n"
      "\tscatter " << fiendish_ashes_scattered_needed << " more fiendish ashes\n"
      "\tscatter " << vile_ashes_scattered_needed << " more vile ashes\n"
      "to level up. Happy grinding!\n";
}

#ifndef OSRS_XP_CALC_FIREMAKING_HPP
#define OSRS_XP_CALC_FIREMAKING_HPP

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
  void calculate(int xp);
};

#endif
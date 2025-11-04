#ifndef OSRS_XP_CALC_MINING_HPP
#define OSRS_XP_CALC_MINING_HPP

class Mining {
private:
  const int CLAY{5};
  const int RUNE_ESSENCE{5};
  const double COPPER{17.5};
  const double TIN{17.5};

public:
  void calculate(int xp);
};

#endif //OSRS_XP_CALC_MINING_HPP
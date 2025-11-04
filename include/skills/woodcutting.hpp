#ifndef OSRS_XP_CALC_WOODCUTTING_HPP
#define OSRS_XP_CALC_WOODCUTTING_HPP

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
  void calculate(int xp);
};

#endif
#ifndef OSRS_XP_CALC_PRAYER_HPP
#define OSRS_XP_CALC_PRAYER_HPP

class Prayer {
private:
  double bones_buried = 4.5;
  int big_bones_buried = 15;
  int fiendish_ashes_scattered = 10;
  int vile_ashes_scattered = 25;

public:
  void calculate(int xp);
};
#endif //OSRS_XP_CALC_PRAYER_HPP
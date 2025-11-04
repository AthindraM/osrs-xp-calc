#ifndef OSRS_XP_CALC_MINING_HPP
#define OSRS_XP_CALC_MINING_HPP

class Mining {
private:
  const double COPPER{17.5};
  const double TIN{17.5};
  const int IRON{35};
  const int SILVER{40};
  const int COAL{50};
  const int GOLD{65};
  const int MITHRIL{80};
  const int ADAMANTITE{95};
  const int RUNITE{125};

public:
  void calculate(int xp);
};

#endif //OSRS_XP_CALC_MINING_HPP
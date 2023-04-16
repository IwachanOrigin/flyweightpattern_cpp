
#ifndef BILL_COIN_FACTORY_H_
#define BILL_COIN_FACTORY_H_

#include <map>

namespace design_pattern
{

class BillCoin;

class BillCoinFactory
{
public:
  explicit BillCoinFactory();

  BillCoin* getBillCoin(const int& amount);

private:
  static std::map<int, BillCoin*> m_coins;
};

} // design_pattern

#endif // BILL_COIN_FACTORY_H_

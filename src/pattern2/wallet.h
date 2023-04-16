
#ifndef WALLET_H_
#define WALLET_H_

#include <list>

namespace design_pattern
{

class BillCoin;

class Wallet
{
public:
  explicit Wallet() = default;
  ~Wallet();

  void add(BillCoin* pCoin);
  int getAmount();

private:
  std::list<BillCoin*> m_coins;
};

} // design_pattern

#endif // WALLET_H_

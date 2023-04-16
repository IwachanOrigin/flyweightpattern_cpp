
#ifndef WALLET_H_
#define WALLET_H_

#include <list>

namespace design_pattern
{

class WalletItem;

class Wallet
{
public:
  explicit Wallet() = default;
  ~Wallet();

  void add(WalletItem* pItem);
  int getAmount();

private:
  std::list<WalletItem*> m_items;
};

} // design_pattern

#endif // WALLET_H_


#ifndef WALLET_ITEM_H_
#define WALLET_ITEM_H_

#include "billcoin.h"

namespace design_pattern
{

class WalletItem
{
public:
  explicit WalletItem(BillCoin* pCoin, const int& quantity);
  ~WalletItem() = default;

  int getAmount() const { return ()m_pCoin->getAmount() * m_quantity); }

private:
  BillCoin* m_pCoin;
  int m_quantity;
};

} // design_pattern

#endif // WALLET_ITEM_H_


#include "walletitem.h"

using namespace design_pattern;

WalletItem::WalletItem(BillCoin* pCoin, const int& quantity)
  : m_pCoin(pCoin)
  , m_quantity(quantity)
{
}



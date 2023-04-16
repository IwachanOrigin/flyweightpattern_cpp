
#include "wallet.h"
#include "walletitem.h"

using namespace design_pattern;

Wallet::~Wallet()
{
  for (auto it = m_items.begin(); it != m_items.end(); it++)
  {
    delete (*it);
    it++;
  }
}

void Wallet::add(WalletItem* pItem)
{
  m_items.push_back(pItem);
}

int Wallet::getAmount()
{
  int result = 0;
  for (auto it = m_items.begin(); it != m_items.end(); it++)
  {
    result += (*it)->getAmount();
    it++;
  }
  return result;
}


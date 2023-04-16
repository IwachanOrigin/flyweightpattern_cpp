
#include "wallet.h"
#include "billcoin.h"

using namespace design_pattern;

Wallet::~Wallet()
{
  for (auto it = m_coins.begin(); it != m_coins.end(); it++)
  {
    delete (*it);
    it++;
  }
}

void Wallet::add(BillCoin* pCoin)
{
  m_coins.push_back(pCoin);
}

int Wallet::getAmount()
{
  int result = 0;
  for (auto it = m_coins.begin(); it != m_coins.end(); it++)
  {
    result += (*it)->getAmount();
    it++;
  }
  return result;
}


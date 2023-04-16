
#include "billcoinfactory.h"
#include "billcoin.h"

using namespace design_pattern;

static int kind[] = {10000, 5000, 2000, 1000, 500, 100, 50, 10, 5, 1};
const int EXCEPTION_AMOUNT = -1;

BillCoinFactory::BillCoinFactory()
{
  for (int i = 0; i < 10; i++)
  {
    m_coins.insert(std::make_pair(kind[i], new BillCoin(kind[i])));
  }
}

BillCoin* BillCoinFactory::getBillCoin(const int& amount)
{
  auto pResult = (BillCoin*)m_coins[amount];
  if (!pResult)
  {
    throw EXCEPTION_AMOUNT;
  }
  return pResult;
}

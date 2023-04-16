
#include "wallet.h"
#include "billcoin.h"

#include <memory>
#include <iostream>

using namespace design_pattern;

int main(int argc, char* argv[])
{
  std::unique_ptr<Wallet> pWallet = std::make_unique<Wallet>();
  pWallet->add(new BillCoin(10000, 1));
  pWallet->add(new BillCoin(5000, 1));
  pWallet->add(new BillCoin(2000, 1));
  pWallet->add(new BillCoin(1000, 1));
  pWallet->add(new BillCoin(500, 1));
  pWallet->add(new BillCoin(100, 1));
  pWallet->add(new BillCoin(50, 1));
  pWallet->add(new BillCoin(10, 2));
  pWallet->add(new BillCoin(5, 1));
  pWallet->add(new BillCoin(1, 4));

  std::cout << "The current contents of the wallet are " << pWallet->getAmount() << std::endl;
  return 0;
}


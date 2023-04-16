
#include "wallet.h"
#include "billcoinfactory.h"
#include "walletitem.h"

#include <memory>
#include <iostream>

using namespace design_pattern;

int main(int argc, char* argv[])
{
  std::unique_ptr<BillCoinFactory> billcoinFactory = std::make_unique<BillCoinFactory>();
  std::unique_ptr<Wallet> pWallet = std::make_unique<Wallet>();
  try
  {
    pWallet->add(new WalletItem(billcoinFactory->getBillCoin(10000), 1));
    pWallet->add(new WalletItem(billcoinFactory->getBillCoin(5000), 1));
    pWallet->add(new WalletItem(billcoinFactory->getBillCoin(2000), 1));
    pWallet->add(new WalletItem(billcoinFactory->getBillCoin(1000), 1));
    pWallet->add(new WalletItem(billcoinFactory->getBillCoin(500), 1));
    pWallet->add(new WalletItem(billcoinFactory->getBillCoin(100), 1));
    pWallet->add(new WalletItem(billcoinFactory->getBillCoin(50), 1));
    pWallet->add(new WalletItem(billcoinFactory->getBillCoin(10), 2));
    pWallet->add(new WalletItem(billcoinFactory->getBillCoin(5), 1));
    pWallet->add(new WalletItem(billcoinFactory->getBillCoin(1), 4));
  }
  catch(...)
  {
    std::cerr << "Incorrect amount." << std::endl;
    return -1;
  }

  std::cout << "The current contents of the wallet are " << pWallet->getAmount() << std::endl;
  return 0;
}


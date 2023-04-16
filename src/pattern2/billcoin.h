
#ifndef BILL_COIN_H_
#define BILL_COIN_H_

namespace design_pattern
{

class BillCoinFactory;

class BillCoin
{
  friend BillCoinFactory;

public:
  ~BillCoin() = default;

  int getAmount() const { return m_amount; }

private:
  explicit BillCoin(const int& amount);

  int m_amount;
};

} // design_pattern

#endif // BILL_COIN_H_

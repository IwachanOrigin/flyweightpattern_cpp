
#ifndef BILL_COIN_H_
#define BILL_COIN_H_

namespace design_pattern
{

class BillCoin
{
public:
  explicit BillCoin(const int& amount, const int& quantity);
  ~BillCoin() = default;

  int getAmount() const { return (m_amount * m_quantity); }

private:
  int m_amount;
  int m_quantity;
};

} // design_pattern

#endif // BILL_COIN_H_

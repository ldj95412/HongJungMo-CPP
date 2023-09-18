#include <iostream>
using namespace std;

class Cents
{
private:
    int m_cents;

public:
    Cents(int cents = 0) { m_cents = cents; }
    int getCents() const { return m_cents; }
    int& getCents() { return m_cents; }
};

void add(const Cents& c1, const Cents& c2, Cents& c_out)
{
    c_out.getCents() = c1.getCents() + c2.getCents();
}

int main()
{
    Cents cents1(6);
    Cents cents2(8);

    Cents sum;
    add(cents1, cents2, sum);

    cout << sum.getCents() << endl;
}
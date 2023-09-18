#include <iostream>
using namespace std;

class Cents
{
private:
    int m_cents;

public:
    Cents(int cents) { m_cents = cents; }

    int getCents() const { return m_cents; }
};

Cents add(const Cents& c1, const Cents& c2)
{
    return Cents(c1.getCents() + c2.getCents());
}


class A
{
public:
    int m_value;


    A(const int& input)
        :m_value(input)
    {
        cout << "Constructor" << endl;
    }

    ~A()
    {
        cout << "Destructor" << endl;

    }
    void printDouble()
    {
        cout << m_value * 2 << endl;
    }
};

int main()
{
    A a(1);        //같은 메모리 주소
    a.printDouble();

    A(1).printDouble();

    //A().print();// 다른 메모리주소(호출된 생성자에서 print 함수를 꺼내 쓰는 느낌)
    //A().print();

    cout << add(Cents(6), Cents(8)).getCents() << endl;
    cout << int(6) + int(8) << endl;
}
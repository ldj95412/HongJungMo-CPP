﻿#include <iostream>
using namespace std;

class A;

class B
{
public:
    int m_value = 2;

    void doSomething(A& a);
};

class A
{
private:
    int m_value = 1;

    //friend class B;
    friend void B::doSomething(A& a);
};

void B::doSomething(A& a)
{
    cout << a.m_value << endl;
}

int main()
{
    A a;
    B b;
    b.doSomething(a);
}


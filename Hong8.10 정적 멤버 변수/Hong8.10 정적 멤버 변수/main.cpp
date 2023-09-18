#include <iostream>
using namespace std;

// 일반 static일 경우 main

class Something
{
public:
    static int s_value; // static 멤버 변수는 초기화 불가능
};

int Something::s_value = 1; //define in cpp(헤더 파일에 넣어두면 애러남)

int main()
{
    cout << &Something::s_value << " " << Something::s_value << endl; //static 변수라서 변수의 주소에 직접적으로 접근 가능함.

    Something st1;
    Something st2;

    st1.s_value = 2;

    cout << &st1.s_value << " " << st1.s_value << endl;
    cout << &st2.s_value << " " << st2.s_value << endl;

    Something::s_value = 1024;

    cout << &Something::s_value << " " << Something::s_value << endl;


    return 0;
}


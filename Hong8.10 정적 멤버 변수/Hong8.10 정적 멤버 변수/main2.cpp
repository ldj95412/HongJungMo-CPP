#include <iostream>
using namespace std;

// 일반 static const일 경우 main2

class Something
{
public:
    static const int s_value = 1; // main1과 반대로 static const 일때는 초기화 가능
    //static constexpr int s_value = 1; // constexpr 컴파일 시간에 변수가 상수로 정의된 명령문에 사용가능

};

//int Something::s_value = 1;

int main()
{
    cout << &Something::s_value << " " << Something::s_value << endl;

    Something st1;
    Something st2;

    //st1.s_value = 2; // const이기 때문에 값을 바꾸지 않음

    cout << &st1.s_value << " " << st1.s_value << endl;
    cout << &st2.s_value << " " << st2.s_value << endl;

    //Something::s_value = 1024;

    cout << &Something::s_value << " " << Something::s_value << endl;


    return 0;
}


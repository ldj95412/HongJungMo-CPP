#include <iostream>
using namespace std;

class Something 
{
public:

    class _init
    {
    public:
        _init()
        {
            s_value = 987;
        }
    }; //정적 멤버 변수를 클래스 내부에서 초기화 하는 방법

private:
    static int s_value;
    int m_value;

    static _init s_initializer; //클래스 내부에서 정적 인스턴스화 시킴


public:
    static int getValue()
    {
        return s_value; // 스태틱은 this 포인터를 못씀(클래스와는 별도로 움직이기 때문)
    }

    int temp()
    {
        return this->s_value;
        //특정 인스턴스의 주소를 받아다가 그걸 쓰겠다.
    }
};

int Something::s_value = 1024;
Something::_init Something::s_initializer;

int main()
{
    cout << Something::getValue() << endl;

    Something s1,s2;

    cout << s1.getValue() << endl;
    //cout << s1.s_value << endl;

    int (Something::*fptr1)() = &Something::temp; //
    //멤버 변수는 각 인스턴스 별로 멤버 변수의 주소가 다름
    //정적 멤버 변수는 각 인스턴스 별로 멤버 변수 주소가 같고 수치도 바뀜
    //멤버 함수는 각 인스턴스 별로 멤버 함수의 주소가 같음
    //멤버 함수는 어디 한곳에 Something이라는 클래스에 속해있는 temp 라는 함수가 한군데 들어있고
    //temp를 사용할 때 s1의 this 포인터를 주고 s1에 속해있는 멤버변수들을 가지고 이 함수를 작동을 시키는 동작

    cout << (s2.*fptr1)() << endl;

    int (*fptr2)() = &Something::getValue;

    cout << fptr2() << endl;

    return 0;
}

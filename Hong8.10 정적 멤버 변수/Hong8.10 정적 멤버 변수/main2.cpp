#include <iostream>
using namespace std;

// �Ϲ� static const�� ��� main2

class Something
{
public:
    static const int s_value = 1; // main1�� �ݴ�� static const �϶��� �ʱ�ȭ ����
    //static constexpr int s_value = 1; // constexpr ������ �ð��� ������ ����� ���ǵ� ��ɹ��� ��밡��

};

//int Something::s_value = 1;

int main()
{
    cout << &Something::s_value << " " << Something::s_value << endl;

    Something st1;
    Something st2;

    //st1.s_value = 2; // const�̱� ������ ���� �ٲ��� ����

    cout << &st1.s_value << " " << st1.s_value << endl;
    cout << &st2.s_value << " " << st2.s_value << endl;

    //Something::s_value = 1024;

    cout << &Something::s_value << " " << Something::s_value << endl;


    return 0;
}


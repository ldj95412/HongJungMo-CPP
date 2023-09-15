#include <iostream>
#include <string>
using namespace std;



class Something
{
public:
	string m_value = "default";

	//멤버 함수의 오버로딩을 알아두기
	const string& getValue() const {
		cout << "const" << endl;
		return m_value;
	}
	string& getValue() {
		cout << "non-const" << endl;
		return m_value;
	}
};

int main()
{
	Something something;
	something.getValue(); // = 10; 값을 바꾸는거 ok
	const Something something2;
	something2.getValue(); // = 20; 값을 바꾸는거 x

}
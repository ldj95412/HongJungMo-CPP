#include <iostream>
#include <string>
using namespace std;



class Something
{
public:
	string m_value = "default";

	//��� �Լ��� �����ε��� �˾Ƶα�
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
	something.getValue(); // = 10; ���� �ٲٴ°� ok
	const Something something2;
	something2.getValue(); // = 20; ���� �ٲٴ°� x

}
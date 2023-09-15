#include <iostream>
using namespace std;

class Something
{
public:
	int m_value = 0;
	/* Copy Constructor(숨어있음)
	
	 Something(const Something& st_in)
	 {
		m_value = st_in.m_value;
	 
		cout << "copy constructor" << endl;
	 }

	 // 객체를 함수의 매개변수로 보내어 새로운 객체2를 만들 때는 생성자 생성이 안된다.
	 // 그 이유는 복사 생성자가 작동하여, 매개변수로 사용할 때 생성자의 생성을 막기 때문이다.
	 */
	
	Something()
	{
		cout << "Constructor" << endl;
	}

	void setValue(int value) { m_value = value; }
	int  getValue()  const
	{
		return m_value;
	}
};

void print(const Something &st) {
	/*
	* 먼저 Something1이라는 객체를 만들고 st라는 객체를 매개변수를 통해 하나 더 만들었지만, 
	* 생성자는 1번 밖에 실행을 안함.
	* 이유는 Class에는 복사 생성자(copy constructor) 라는게 숨어있기 때문임.
	*/
	cout << &st << endl;
	cout << st.m_value << endl;
}

int main()
{
	Something Something1;
	/*
	const 판단 기준
	 1.  멤버 변수를 변경하려고 할때는 당연히 const(상수) 적용이라 오류라 판단.
	 2.  하지만 멤버함수를 호출 할때는 멤버 변수가 변경되지 않아도 오류라 판단함.
	 3.  그 이유는 판단기준이 멤버함수에 const가 있냐 없냐로 판단하기 때문임.
	 4.  즉 객체에 const 선언을 할 경우 객체 내에서 const 멤버 함수 만 사용가능
	 */

	cout << &Something1 << endl;

	print(Something1);

}


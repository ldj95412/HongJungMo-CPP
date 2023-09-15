#include <iostream>
using namespace std;

class Something
{
public:
	int m_value = 0;
	/* Copy Constructor(��������)
	
	 Something(const Something& st_in)
	 {
		m_value = st_in.m_value;
	 
		cout << "copy constructor" << endl;
	 }

	 // ��ü�� �Լ��� �Ű������� ������ ���ο� ��ü2�� ���� ���� ������ ������ �ȵȴ�.
	 // �� ������ ���� �����ڰ� �۵��Ͽ�, �Ű������� ����� �� �������� ������ ���� �����̴�.
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
	* ���� Something1�̶�� ��ü�� ����� st��� ��ü�� �Ű������� ���� �ϳ� �� ���������, 
	* �����ڴ� 1�� �ۿ� ������ ����.
	* ������ Class���� ���� ������(copy constructor) ��°� �����ֱ� ������.
	*/
	cout << &st << endl;
	cout << st.m_value << endl;
}

int main()
{
	Something Something1;
	/*
	const �Ǵ� ����
	 1.  ��� ������ �����Ϸ��� �Ҷ��� �翬�� const(���) �����̶� ������ �Ǵ�.
	 2.  ������ ����Լ��� ȣ�� �Ҷ��� ��� ������ ������� �ʾƵ� ������ �Ǵ���.
	 3.  �� ������ �Ǵܱ����� ����Լ��� const�� �ֳ� ���ķ� �Ǵ��ϱ� ������.
	 4.  �� ��ü�� const ������ �� ��� ��ü ������ const ��� �Լ� �� ��밡��
	 */

	cout << &Something1 << endl;

	print(Something1);

}


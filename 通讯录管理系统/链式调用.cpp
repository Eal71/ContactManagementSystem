#include<iostream>
using namespace std;
class Person {
public:
	int m_Age = 0;
	//����ֵΪ���ã�������ʽ���ã�p2��m_Age��ֵ10������temp1�
	//temp1.m_Age=10,10+10=20��p2��m_Age��ֵ20������temp2�
	//temp2.m_Age=20,20+10=30
	//���ض���ֵ���ÿ������캯�����������Ǹ���
	Person add1(int age) {
		m_Age += age;
		cout << "Current age: " << m_Age << endl;
		return *this;
	}
	//���ض������ã����ص��Ǳ���
	/*Person* const add2(int age) {
		m_Age += age;
		cout << "Current age: " << m_Age << endl;
		return this;
	}*/
	Person& add2(int age) {
		m_Age += age;
		cout << "Current age: " << m_Age << endl;
		return *this;
	}

};
//int main() {
//	Person p1;
//	Person p2;
//	//Person* p21 = &p2;
//	p2.add1(10).add1(10).add1(10);
//	cout << p2.m_Age << endl;
//	//��ʽ����
//	//p21->add2(0)->add2(10)->add2(10);
//	p2.add2(0).add2(10).add2(10);
//	cout << p2.m_Age << endl;
//	system("pause");
//	return 0;
//}
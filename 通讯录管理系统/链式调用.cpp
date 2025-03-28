#include<iostream>
using namespace std;
class Person {
public:
	int m_Age = 0;
	//返回值为引用，可以链式调用，p2的m_Age的值10拷贝到temp1里，
	//temp1.m_Age=10,10+10=20，p2的m_Age的值20拷贝到temp2里，
	//temp2.m_Age=20,20+10=30
	//返回对象值调用拷贝构造函数，产生的是副本
	Person add1(int age) {
		m_Age += age;
		cout << "Current age: " << m_Age << endl;
		return *this;
	}
	//返回对象引用，返回的是本体
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
//	//链式调用
//	//p21->add2(0)->add2(10)->add2(10);
//	p2.add2(0).add2(10).add2(10);
//	cout << p2.m_Age << endl;
//	system("pause");
//	return 0;
//}
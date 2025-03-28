//#include <iostream>
//using namespace std;
////普通写法
//class Calculator {
//public:
//	int m_num1;
//	int m_num2;
//
//	int result(string m) {
//		if (m == "+") {
//			return m_num1 + m_num2;
//		}
//		else if (m == "-") {
//			return m_num1 - m_num2;
//		}
//		else if (m == "*") {
//			return m_num1 * m_num2;
//		}
//	}
//};
////多态写法
//class AbstractCalculator {
//public:
//	virtual int result() {
//		return 0;
//	}
//	int m_num1;
//	int m_num2;
//};
//class add : public AbstractCalculator{
//public:
//	virtual int result() {
//		return m_num1 + m_num2;
//	}
//};
//class sub : public AbstractCalculator {
//public:
//	virtual int result() {
//		return m_num1 - m_num2;
//	}
//};
//class mul : public AbstractCalculator {
//public:
//	virtual int result() {
//		return m_num1 * m_num2;
//	}
//};
//void test() {
//	Calculator c;
//	c.m_num1 = 10;
//	c.m_num2 = 10;
//	cout << c.m_num1 << " + " << c.m_num2 << " = " << c.result("+") << endl;
//	cout << c.m_num1 << " - " << c.m_num2 << " = " << c.result("-") << endl;
//	cout << c.m_num1 << " * " << c.m_num2 << " = " << c.result("*") << endl;
//}
//void test1() {
//	AbstractCalculator* c1{};
//
//	add a;
//	a.m_num1 = 10;
//	a.m_num2 = 10;
//	cout << a.m_num1 << " + " << a.m_num2 << " = " << a.result() << endl;
//	//delete c1;
//
//	c1 = new sub;
//	c1->m_num1 = 10;
//	c1->m_num2 = 10;
//	cout << c1->m_num1 << " - " << c1->m_num2 << " = " << c1->result() << endl;
//	delete c1;
//
//	c1 = new mul;
//	c1->m_num1 = 10;
//	c1->m_num2 = 10;
//	cout << c1->m_num1 << " * " << c1->m_num2 << " = " << c1->result() << endl;
//	delete c1;
//
//}
//int main() {
//	//test();
//	test1();
//}
//#include <iostream>
//using namespace std;
//class Father {
//public:
//	//��̬��̬�������ڼ�ȷ��
//	/*void work() {
//		cout << "father" << endl;
//	};*/
//	//��̬��̬�������ڼ�ȷ�����ᴴ��һ��vptrָ��һ��vtbl
//	virtual void work() {
//		cout << "father" << endl;
//	};
//	virtual void work1() {
//		cout << "father1" << endl;
//	};
//};
//class Son : public Father{
//public:
//	void work() {
//		cout << "son" << endl;
//	};
//};
//
//void test1(){
//	//�̳п����ø���ָ��һ���������
//	Father* father = new Son();
//	//vptrָ��������д�ķ���
//	father->work();
//	//vptrָ���෽��������û����д
//	father->work1();
//	delete father;
//}
//void test2() {
//	Son* s = new Son();
//	Father* f = s;
//}
//int main() {
//	test1();
//	return 0;
//}
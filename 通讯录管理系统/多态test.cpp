//#include <iostream>
//using namespace std;
//class Father {
//public:
//	//静态多态，编译期间确定
//	/*void work() {
//		cout << "father" << endl;
//	};*/
//	//动态多态，运行期间确定，会创建一个vptr指向一个vtbl
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
//	//继承可以让父类指向一个子类对象
//	Father* father = new Son();
//	//vptr指向子类重写的方法
//	father->work();
//	//vptr指向父类方法，子类没有重写
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
//#include <iostream>
//using namespace std;
//class Drink {
//public:
//	virtual void boil() = 0;
//	virtual void chong() = 0;
//	virtual void pour() = 0;
//	virtual void add() = 0;
//	void success() {
//		boil();
//		chong();
//		pour();
//		add();
//	}
//};
//class coffee : public Drink{
//public:
//	virtual void boil() {
//		cout << "��ˮ1" << endl;
//	};
//	virtual void chong() {
//		cout << "�忧��" << endl;
//	};
//	virtual void pour() {
//		cout << "���뱭��" << endl;
//	};
//	virtual void add() {
//		cout << "����" << endl;
//	};
//};
//class tea : public Drink {
//public:
//	virtual void boil() {
//		cout << "��ˮ2" << endl;
//	};
//	virtual void chong() {
//		cout << "���" << endl;
//	};
//	virtual void pour() {
//		cout << "����豭��" << endl;
//	};
//	virtual void add() {
//		cout << "������" << endl;
//	};
//};
//void make(Drink &d) {
//	d.success();
//}
//void make1(Drink* d) {
//	d->success();
//	delete d;
//}
//void test(){
//	coffee c;
//	make(c);
//	make1(new tea);
//};
//int main() {
//	test();
//}
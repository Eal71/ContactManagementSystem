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
//		cout << "ÖóË®1" << endl;
//	};
//	virtual void chong() {
//		cout << "³å¿§·È" << endl;
//	};
//	virtual void pour() {
//		cout << "µ¹Èë±­ÖÐ" << endl;
//	};
//	virtual void add() {
//		cout << "¼ÓÌÇ" << endl;
//	};
//};
//class tea : public Drink {
//public:
//	virtual void boil() {
//		cout << "ÖóË®2" << endl;
//	};
//	virtual void chong() {
//		cout << "³å²è" << endl;
//	};
//	virtual void pour() {
//		cout << "µ¹Èë²è±­ÖÐ" << endl;
//	};
//	virtual void add() {
//		cout << "¼ÓÄûÃÊ" << endl;
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
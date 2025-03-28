//#include<iostream>
//using namespace std;
//int firstAdd(int a) {
//	//先使用在更新仅限当前语句，a++返回的是0，然后自增
//	a++;
//	//第二句话已经自增完了
//	int b = a + 1;
//	return b;
//}
//int firstAdd1(int a) {
//	//先使用在更新仅限当前语句，a++返回的是0，所以b = 0 + 1 = 1
//	int b = a++ + 1;
//	return b;
//}
//int afterAdd(int &a) {
//	//先返回原来的值
//	int temp = a;
//	a++;
//	return temp;
//}
//int main() {
//	int a = 0;
//	//(a++)++,非法，返回的不是引用类型，函数内局部对象被释放
//	cout << firstAdd(a) << endl;
//	cout << firstAdd1(a) << endl;
//	cout << afterAdd(a) << endl;
//	cout << afterAdd(a) << endl;
//	cout << a << endl;
//	
//}
//#include<iostream>
//using namespace std;
//int firstAdd(int a) {
//	//��ʹ���ڸ��½��޵�ǰ��䣬a++���ص���0��Ȼ������
//	a++;
//	//�ڶ��仰�Ѿ���������
//	int b = a + 1;
//	return b;
//}
//int firstAdd1(int a) {
//	//��ʹ���ڸ��½��޵�ǰ��䣬a++���ص���0������b = 0 + 1 = 1
//	int b = a++ + 1;
//	return b;
//}
//int afterAdd(int &a) {
//	//�ȷ���ԭ����ֵ
//	int temp = a;
//	a++;
//	return temp;
//}
//int main() {
//	int a = 0;
//	//(a++)++,�Ƿ������صĲ����������ͣ������ھֲ������ͷ�
//	cout << firstAdd(a) << endl;
//	cout << firstAdd1(a) << endl;
//	cout << afterAdd(a) << endl;
//	cout << afterAdd(a) << endl;
//	cout << a << endl;
//	
//}
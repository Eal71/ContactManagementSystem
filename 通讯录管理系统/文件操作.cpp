//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//int main() {
//	ofstream ofs;
//	ifstream ifs;
//	//д�ļ�
//	/*ofs.open("test.txt", ios::out);
//	ofs << "����������" << endl;
//	ofs << "�Ա���" << endl;
//	ofs << "���䣺18" << endl;*/
//	//���ļ�
//	//ifs.open("test.txt", ios::in);
//	//if (!ifs.is_open()) {
//	//	cout << "�ļ���ʧ��" << endl;
//	//}
//	////��һ�ַ���
//	//string buf;
//	//while (getline(ifs,buf)) {
//	//	cout << buf << endl;
//	//}
//	//�ڶ��ַ���
//	/*char buf[1024];
//	while (ifs.getline(buf,sizeof(buf))){
//		cout << buf << endl;
//	}*/
//	//������д
//	char name[64];
//	/*ofs.open("test1.txt", ios::out | ios::binary);
//	ofs.write((const char*)name,sizeof(name));*/
//	//�����ƶ�
//	ifs.open("test1.txt", ios::in | ios::binary);
//	if (!ifs.is_open()) {
//		cout << "�ļ���ʧ��" << endl;
//	}
//	ifs.read((char*)name, sizeof(name));
//	cout << name << endl;
//	ofs.close();
//}
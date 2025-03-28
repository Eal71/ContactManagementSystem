//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//int main() {
//	ofstream ofs;
//	ifstream ifs;
//	//写文件
//	/*ofs.open("test.txt", ios::out);
//	ofs << "姓名：张三" << endl;
//	ofs << "性别：男" << endl;
//	ofs << "年龄：18" << endl;*/
//	//读文件
//	//ifs.open("test.txt", ios::in);
//	//if (!ifs.is_open()) {
//	//	cout << "文件打开失败" << endl;
//	//}
//	////第一种方法
//	//string buf;
//	//while (getline(ifs,buf)) {
//	//	cout << buf << endl;
//	//}
//	//第二种方法
//	/*char buf[1024];
//	while (ifs.getline(buf,sizeof(buf))){
//		cout << buf << endl;
//	}*/
//	//二进制写
//	char name[64];
//	/*ofs.open("test1.txt", ios::out | ios::binary);
//	ofs.write((const char*)name,sizeof(name));*/
//	//二进制读
//	ifs.open("test1.txt", ios::in | ios::binary);
//	if (!ifs.is_open()) {
//		cout << "文件打开失败" << endl;
//	}
//	ifs.read((char*)name, sizeof(name));
//	cout << name << endl;
//	ofs.close();
//}
#include <iostream>
using namespace  std;
#define MAX 1000

struct person {
	string name;
	int sex;
	int age;
	int phone;
	string addr;
};
struct addrBook {
	person personArr[MAX];
	int personSize;
};
void addPerson(addrBook* abs) {

	string name;
	cout << "请输入姓名" << endl;
	cin >> name;
	abs->personArr[abs->personSize].name = name;

	int sex;
	cout << "请输入性别" << endl;
	cout << "1 -- 男" << endl;
	cout << "2 -- 女" << endl;

	while (1) {
		cin >> sex;
		if (sex == 1 || sex == 2) {
			abs->personArr[abs->personSize].sex = sex;
			break;
		}
		else {
			cout << "请输入正确数字" << endl;
		}
	}

	int age;
	cout << "请输入年龄" << endl;
	cin >> age;
	abs->personArr[abs->personSize].age = age;

	int phone;
	cout << "请输入电话" << endl;
	cin >> phone;
	abs->personArr[abs->personSize].phone = phone;

	string addr;
	cout << "请输入地址" << endl;
	cin >> addr;
	abs->personArr[abs->personSize].addr = addr;
	cout << "添加成功" << endl;

	abs->personSize++;
	system("pause");
	system("cls");
}
void selectPerson(addrBook* abs) {
	if (abs->personSize == 0) {
		cout << "通讯录为空" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "姓名\t\t" << "性别\t\t" << "年龄\t\t" << "电话\t\t" << "地址\t\t" << endl;
		for (int i = 0;i < abs->personSize;i++) {
			cout << abs->personArr[i].name << "\t\t" << (abs->personArr[i].sex == 1 ? "男" : "女") << "\t\t" << abs->personArr[i].age << "\t\t" << abs->personArr[i].phone << "\t\t" << abs->personArr[i].addr << "\t\t" << endl;
		}
		system("pause");
		system("cls");
	}
}
int isExist(addrBook* abs,string name) {
	for (int i = 0; i < abs->personSize; i++)
	{
		if (abs->personArr[i].name == name) {
			return i;
		}
	}
	return -1;
}
void deletePerson(addrBook* abs) {
	string name;
	cout << "请输入要删除的联系人姓名" << endl;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		for (int i = ret; i < abs->personSize; i++)
		{
			abs->personArr[i] = abs->personArr[i + 1];
		}
		abs->personSize--;
		cout << "删除成功" << endl;
	}
	else {
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");

}
void findPerson(addrBook* abs) {
	string name;
	cout << "请输入要查找的联系人姓名" << endl;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		cout << "姓名\t\t" << "性别\t\t" << "年龄\t\t" << "电话\t\t" << "地址\t\t" << endl;
		cout << abs->personArr[ret].name << "\t\t" << (abs->personArr[ret].sex == 1 ? "男" : "女") << "\t\t" << abs->personArr[ret].age << "\t\t" << abs->personArr[ret].phone << "\t\t" << abs->personArr[ret].addr << "\t\t" << endl;
	}
	else {
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
void updatPerson(addrBook* abs) {
	string name;
	cout << "请输入要修改的联系人姓名" << endl;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		string name;
		cout << "请输入姓名" << endl;
		cin >> name;
		abs->personArr[ret].name = name;

		int sex;
		cout << "请输入性别" << endl;
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;

		while (1) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArr[ret].sex = sex;
				break;
			}
			else {
				cout << "请输入正确数字" << endl;
			}
		}

		int age;
		cout << "请输入年龄" << endl;
		cin >> age;
		abs->personArr[ret].age = age;

		int phone;
		cout << "请输入电话" << endl;
		cin >> phone;
		abs->personArr[ret].phone = phone;

		string addr;
		cout << "请输入地址" << endl;
		cin >> addr;
		abs->personArr[ret].addr = addr;
		cout << "修改成功" << endl;
	}
	else {
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
void clearPerson(addrBook * abs){
	char ch = 0;
	cout << "你确定要清空吗?确认y取消n" << endl;
	cin >> ch;
	if (ch == 'y') {
		abs->personSize = 0;
		cout << "清空完成" << endl;
	}
	else {
		cout << "取消清空" << endl;
	}
	system("pause");
	system("cls");
	
}
void showMenu() {
	cout << "************************" << endl;
	cout << "***** 1.添加联系人 *****" << endl;
	cout << "***** 2.显示联系人 *****" << endl;
	cout << "***** 3.删除联系人 *****" << endl;
	cout << "***** 4.查找联系人 *****" << endl;
	cout << "***** 5.修改联系人 *****" << endl;
	cout << "***** 6.清空联系人 *****" << endl;
	cout << "***** 0.退出通讯录 *****" << endl;
	cout << "************************" << endl;
}
int main() {
	addrBook abs;
	abs.personSize = 0;
	int select = 0;
	while (1) {
		showMenu();
		cin >> select;

		switch (select)
		{
		case 1:   //1.添加联系人
			addPerson(&abs);
			break;
		case 2:	  //2.显示联系人
			selectPerson(&abs);
			break;
		case 3:	  //3.删除联系人
			deletePerson(&abs);
			break;
		case 4:	  //4.查找联系人
			findPerson(&abs);
			break;
		case 5:   //5.修改联系人
			updatPerson(&abs);
			break;
		case 6:   //6.清空联系人
			clearPerson(&abs);
			break;
		case 0:   //0.退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
}
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
	cout << "����������" << endl;
	cin >> name;
	abs->personArr[abs->personSize].name = name;

	int sex;
	cout << "�������Ա�" << endl;
	cout << "1 -- ��" << endl;
	cout << "2 -- Ů" << endl;

	while (1) {
		cin >> sex;
		if (sex == 1 || sex == 2) {
			abs->personArr[abs->personSize].sex = sex;
			break;
		}
		else {
			cout << "��������ȷ����" << endl;
		}
	}

	int age;
	cout << "����������" << endl;
	cin >> age;
	abs->personArr[abs->personSize].age = age;

	int phone;
	cout << "������绰" << endl;
	cin >> phone;
	abs->personArr[abs->personSize].phone = phone;

	string addr;
	cout << "�������ַ" << endl;
	cin >> addr;
	abs->personArr[abs->personSize].addr = addr;
	cout << "��ӳɹ�" << endl;

	abs->personSize++;
	system("pause");
	system("cls");
}
void selectPerson(addrBook* abs) {
	if (abs->personSize == 0) {
		cout << "ͨѶ¼Ϊ��" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "����\t\t" << "�Ա�\t\t" << "����\t\t" << "�绰\t\t" << "��ַ\t\t" << endl;
		for (int i = 0;i < abs->personSize;i++) {
			cout << abs->personArr[i].name << "\t\t" << (abs->personArr[i].sex == 1 ? "��" : "Ů") << "\t\t" << abs->personArr[i].age << "\t\t" << abs->personArr[i].phone << "\t\t" << abs->personArr[i].addr << "\t\t" << endl;
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
	cout << "������Ҫɾ������ϵ������" << endl;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		for (int i = ret; i < abs->personSize; i++)
		{
			abs->personArr[i] = abs->personArr[i + 1];
		}
		abs->personSize--;
		cout << "ɾ���ɹ�" << endl;
	}
	else {
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");

}
void findPerson(addrBook* abs) {
	string name;
	cout << "������Ҫ���ҵ���ϵ������" << endl;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		cout << "����\t\t" << "�Ա�\t\t" << "����\t\t" << "�绰\t\t" << "��ַ\t\t" << endl;
		cout << abs->personArr[ret].name << "\t\t" << (abs->personArr[ret].sex == 1 ? "��" : "Ů") << "\t\t" << abs->personArr[ret].age << "\t\t" << abs->personArr[ret].phone << "\t\t" << abs->personArr[ret].addr << "\t\t" << endl;
	}
	else {
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
void updatPerson(addrBook* abs) {
	string name;
	cout << "������Ҫ�޸ĵ���ϵ������" << endl;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		string name;
		cout << "����������" << endl;
		cin >> name;
		abs->personArr[ret].name = name;

		int sex;
		cout << "�������Ա�" << endl;
		cout << "1 -- ��" << endl;
		cout << "2 -- Ů" << endl;

		while (1) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArr[ret].sex = sex;
				break;
			}
			else {
				cout << "��������ȷ����" << endl;
			}
		}

		int age;
		cout << "����������" << endl;
		cin >> age;
		abs->personArr[ret].age = age;

		int phone;
		cout << "������绰" << endl;
		cin >> phone;
		abs->personArr[ret].phone = phone;

		string addr;
		cout << "�������ַ" << endl;
		cin >> addr;
		abs->personArr[ret].addr = addr;
		cout << "�޸ĳɹ�" << endl;
	}
	else {
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
void clearPerson(addrBook * abs){
	char ch = 0;
	cout << "��ȷ��Ҫ�����?ȷ��yȡ��n" << endl;
	cin >> ch;
	if (ch == 'y') {
		abs->personSize = 0;
		cout << "������" << endl;
	}
	else {
		cout << "ȡ�����" << endl;
	}
	system("pause");
	system("cls");
	
}
void showMenu() {
	cout << "************************" << endl;
	cout << "***** 1.�����ϵ�� *****" << endl;
	cout << "***** 2.��ʾ��ϵ�� *****" << endl;
	cout << "***** 3.ɾ����ϵ�� *****" << endl;
	cout << "***** 4.������ϵ�� *****" << endl;
	cout << "***** 5.�޸���ϵ�� *****" << endl;
	cout << "***** 6.�����ϵ�� *****" << endl;
	cout << "***** 0.�˳�ͨѶ¼ *****" << endl;
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
		case 1:   //1.�����ϵ��
			addPerson(&abs);
			break;
		case 2:	  //2.��ʾ��ϵ��
			selectPerson(&abs);
			break;
		case 3:	  //3.ɾ����ϵ��
			deletePerson(&abs);
			break;
		case 4:	  //4.������ϵ��
			findPerson(&abs);
			break;
		case 5:   //5.�޸���ϵ��
			updatPerson(&abs);
			break;
		case 6:   //6.�����ϵ��
			clearPerson(&abs);
			break;
		case 0:   //0.�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
}
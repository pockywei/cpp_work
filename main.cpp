#include <cstring>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <map>
#include <algorithm>
#include "menu.h"
using namespace std;

int main() {
	menu M1;
	M1.display_menu();
	M1.return_menu();
	return 0;
}
//class addbuyer :public buyer {
//private:
//	int flag[1];
//public:
//
//};
//
//class creatbuyerlist {
//
//};
//
//
//int getBuyerLine()
//{
//	ifstream in("Buyer.txt");
//	string line;
//	int n = 0;
//	while (getline(in, line))
//	{
//		n++;
//	}
//	in.close();
//	return n;
//}


//int main()
//{
//	int i = 0, buyerid, flag;
//	book* c[2];
//	layfolk b1("��С��", 1, "����", 0);
//	honoured_guest b2("������", 2, .6, "�Ϻ�", 0);
//	member b3("�Ժ���", 3, 5, "����", 0);
//	string name[20];
//	string buyerID[20];
//	string a[20];
//	string pay[20];
//	string discount[20];
//
//	ofstream BLout("buyer.txt");
//	if (!BLout) {
//		cout << "�ļ���ʧ��" << endl;
//		return 0;
//	}
//	BLout <<"����������"<< "\t" << "�����˱��" << "\t" << "��ַ" << "\t" << "�������" << "\t" << "�������ۿ���" << endl;
//	BLout << "��С��" << "\t\t" << 1 << "\t\t" << "����" << "\t" << 0 << "\t" << 0 << endl;
//	BLout << "������" << "\t\t" << 2 << "\t\t" << "�Ϻ�" << "\t" << 0 << "\t" << 0.4 << endl;
//	BLout << "�Ժ���" << "\t\t" << 3 << "\t\t" << "����" << "\t" << 0 << "\t" << 5 << endl;
//	BLout.close();
//
//	ifstream BLin("buyer.txt");
//	if (!BLin) {
//		cout << "�ļ���ʧ��" << endl;
//		return 0;
//	}
//	
//	int n = getBuyerLine();
//	for (int i = 0; i < n; i++)
//	{
//		BLin >> name[i] >> buyerID[i] >> a[i] >> pay[i]>>discount[i];
//	}
//	BLin.close();
//	int bb = atoi(buyerID[1].c_str());
//	double pp = atof(pay[1].c_str());
//
//	layfolk b4(name[1], bb, a[1], pp);
//
//	buyer* b[4] = { &b1,&b2,&b3,&b4 };
//	book c1("7-302-04504-6", "C++�������", "̷��ǿ", "�廪", 25);
//	book c2("7-402-03388-9", "���ݽṹ", "��׿Ⱥ", "����", 20);
//	c[0] = &c1;
//	c[1] = &c2;
//	cout << "��������Ϣ:\n\n";
//	for (i = 0; i < 4; i++)
//	{
//		b[i]->display();
//	}
//	cout << "\nͼ����Ϣ\n\n";
//	for (i = 0; i < 2; i++)
//	{
//		c[i]->display();
//	}
//	cout << "\n\n�����빺���˱�ţ�";
//	cin >> buyerid;
//	flag = 0;
//	for (i = 0; i < 3; i++)
//
//		if (b[i]->getid() == buyerid) { flag = 1; break; }
//	if (!flag) { cout << "��Ų�����" << endl; }
//	else
//	{
//		b[i]->setpay(c[0]->getprice());
//		b[i]->setpay(c[1]->getprice());
//		cout << endl << "��������Ҫ����:" << b[i]->getpay() << "\n\n";
//	}
//	return 0;
//}
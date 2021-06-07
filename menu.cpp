#include "menu.h"

administrator adm;
buyer_managerment bm;
book_warehouse bw;
order_library ol;
receipt re;
menu men;
text tx;

void menu::display_menu() {  //��ʾ�˵����ܣ���ʼ 
	cout << "����������ӭʹ�����Ϲ������ϵͳ����������" << endl;
	cout << "          ����ѡ��ʹ�õ�ϵͳ����          " << endl;
	cout << "              1.����Ա��¼                " << endl;
	cout << "              2.����Աע��                " << endl;
	cout << "              3.�˳�ϵͳ                  " << endl;
	cout << endl;
	cout << "******ע������Ա��¼��ſɲ���ϵͳ��******" << endl;
	cout << "������������������������������������������" << endl;
}
void menu::switch_menu() {   //ѡ��˵����ܣ���ת 
	cout << endl;
	cout << "����������ѡ��";

	int cmd;  //ѡ��˵����ܱ��
	cin >> cmd;

	switch (cmd) {
	case 1: 
		system("cls");
		adm.sign_in_administrator();
		break;
	case 2:
		system("cls");
		if (men.testadm_menu()) {
			adm.register_administrator();
		}
		else {
			cout << "��֤��������" << endl;
			men.switch_menu();
		}
		break;
	case 3: 
		cout << endl;
		cout << "����������������ӭ�´�ʹ�ã���������������" << endl;
		exit(1);
		break;
	default: 
		cout << endl;
		cout << "***  ��������***" << endl;
		men.switch_menu();
		break;
	}
}
void menu::return_menu() {   //����or�˳� 
	char ch;
	cout << endl;
	cout << "���践��������,������R" << endl;
	cout << "�����˳�,������E" << endl;
	cout << endl;
	cout << "����������ѡ��";

	cin >> ch;

	switch (ch) {
	case 'R': 
		system("cls");
		menu::display_menu();
		menu::switch_menu();
		break;
	case 'r': 
		system("cls");
		menu::display_menu();
		menu::switch_menu();
		break;
	case 'E': 
		cout << endl;
		cout << "����������������ӭ�´�ʹ�ã���������������" << endl;
		exit(1);
		break;
	case 'e': 
		cout << endl;
		cout << "����������������ӭ�´�ʹ�ã���������������" << endl;
		exit(1);
		break;
	default: 
		cout << endl;
		cout << "***  ��������***" << endl;
		men.return_menu();
		break;
	}
}
void menu::display_second_menu() {   //��ʾ�˵����ܣ���½��
	cout << "�������������� ��ӭʹ�ã� ����������������" << endl;
	cout << endl;
	cout << "           ����ѡ�����²˵�����           " << endl;
	cout << "              1.�鿴���й�������Ϣ        " << endl;
	cout << "              2.��ѯ��������Ϣ            " << endl;
	cout << "              3.�鿴�����鼮��Ϣ          " << endl;
	cout << "              4.��ѯ�鼮��Ϣ              " << endl;
	cout << "              5.�鿴������ʷ����          " << endl;
	cout << "              6.��ѯ��ʷ����              " << endl;
	cout << "              7.��ӷ�Ʊ                  " << endl;
	cout << "              8.��ѯ��Ʊ                  " << endl;
	cout << "              9.�˳�                      " << endl;
	cout << "������������������������������������������" << endl;
}
void menu::switch_second_menu() {    //ѡ��˵����ܣ���ת ��½��
	cout << endl;
	cout << "����������ѡ��";

	int cmd;  //ѡ��˵����ܱ��
	cin >> cmd;

	switch (cmd) {
	case 1: 
		system("cls");
		tx.display_buyerlist();
		int n;
		cout << endl;
		cout << "*******************************" << endl;
		cout << " ����ѡ�����²˵����ܣ�" << endl;
		cout << " 1.��ӹ�������Ϣ" << endl;
		cout << " 2.�������˵�" << endl;
		cout << endl;
		cout << "����������ѡ��" << endl;
		cin >> n;
		if (n == 1)
			bm.add_buyer();
		else {
			if (n == 2)
				men.display_second_menu();
			else {
				cout << endl;
				cout << "***  ��������***" << endl;
				cout << "*** �Զ���ת�����˵���***" << endl;
				men.display_second_menu();
			}
		}
		break;
	case 2: 
		system("cls");
		int a;
		cin >> a;
		bm.get_buyer_by_id(a);
		break;
	case 3:
		system("cls");
		tx.display_booklist();
		int n;
		cout << endl;
		cout << "*******************************" << endl;
		cout << " ����ѡ�����²˵����ܣ�" << endl;
		cout << " 1.����鼮��Ϣ" << endl;
		cout << " 2.�������˵�" << endl;
		cout << endl;
		cout << "����������ѡ��" << endl;
		cin >> n;
		if (n == 1) {
			int a, b;
			cin >> a >> b;
			bw.add_book(a,b);
		}
		else {
			if (n == 2)
				men.display_second_menu();
			else {
				cout << endl;
				cout << "***  ��������***" << endl;
				cout << "*** �Զ���ת�����˵���***" << endl;
				men.display_second_menu();
			}
		}
		break;
	case 4:
		system("cls");
		int a;
		cin >> a;
		bw.get_book_by_id(a);
		break;
	case 5:
		system("cls");
		tx.display_orderlist();
		int n;
		cout << endl;
		cout << "*******************************" << endl;
		cout << " ����ѡ�����²˵����ܣ�" << endl;
		cout << " 1.��Ӷ�����Ϣ" << endl;
		cout << " 2.�������˵�" << endl;
		cout << endl;
		cout << "����������ѡ��" << endl;
		cin >> n;
		if (n == 1) {
			ol.create_order();
		}
		else {
			if (n == 2)
				men.display_second_menu();
			else {
				cout << endl;
				cout << "***  ��������***" << endl;
				cout << "*** �Զ���ת�����˵���***" << endl;
				men.display_second_menu();
			}
		}
		break;
	case 6:
		system("cls");
		int a;
		cin >> a;
		ol.search_order(a);
		break;
	case 7:
		system("cls");
		re.add_receipt();
		break;
	case 8:
		system("cls");
		int n;
		cout << "�����뷢Ʊ��ţ�";
		cin >> n;
		re.get_receipt_by_id(n);
		break;
	case 9: 
		cout << endl;
		cout << "����������������ӭ�´�ʹ�ã���������������" << endl;
		exit(1);
		break;
	default: 
		cout << endl;
		cout << "***  ��������***" << endl;
		men.switch_second_menu();
		break;
	}
}
void menu::return_second_menu() {    //����or�˳�   (��½�� 
	char ch;
	cout << endl;
	cout << "���践��,������R" << endl;
	cout << "�����˳�,������E" << endl;
	cout << endl;
	cout << "����������ѡ��";

	cin >> ch;

	switch (ch) {
	case 'R': system("cls");
		menu::display_second_menu();
		menu::switch_second_menu();
		break;
	case 'r': system("cls");
		menu::display_second_menu();
		menu::switch_second_menu();
		break;
	case 'E': cout << endl;
		cout << "����������������ӭ�´�ʹ�ã���������������" << endl;
		exit(1);
		break;
	case 'e': cout << endl;
		cout << "����������������ӭ�´�ʹ�ã���������������" << endl;
		exit(1);
		break;
	default: cout << endl;
		cout << "***  ��������***" << endl;
		men.return_second_menu();
		break;
	}
}
int menu::testadm_menu() {};
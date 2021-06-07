#include "menu.h"

administrator adm;
buyer_managerment bm;
book_warehouse bw;
order_library ol;
receipt re;
menu men;
text tx;

void menu::display_menu() {  //显示菜单功能（初始 
	cout << "————欢迎使用网上购书结算系统！————" << endl;
	cout << "          请您选择使用的系统功能          " << endl;
	cout << "              1.管理员登录                " << endl;
	cout << "              2.管理员注册                " << endl;
	cout << "              3.退出系统                  " << endl;
	cout << endl;
	cout << "******注：管理员登录后才可操作系统！******" << endl;
	cout << "—————————————————————" << endl;
}
void menu::switch_menu() {   //选择菜单功能（跳转 
	cout << endl;
	cout << "请输入您的选择：";

	int cmd;  //选择菜单功能编号
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
			cout << "验证密码有误！" << endl;
			men.switch_menu();
		}
		break;
	case 3: 
		cout << endl;
		cout << "———————欢迎下次使用！———————" << endl;
		exit(1);
		break;
	default: 
		cout << endl;
		cout << "***  输入有误！***" << endl;
		men.switch_menu();
		break;
	}
}
void menu::return_menu() {   //返回or退出 
	char ch;
	cout << endl;
	cout << "如需返回主界面,请输入R" << endl;
	cout << "如需退出,请输入E" << endl;
	cout << endl;
	cout << "请输入您的选择：";

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
		cout << "———————欢迎下次使用！———————" << endl;
		exit(1);
		break;
	case 'e': 
		cout << endl;
		cout << "———————欢迎下次使用！———————" << endl;
		exit(1);
		break;
	default: 
		cout << endl;
		cout << "***  输入有误！***" << endl;
		men.return_menu();
		break;
	}
}
void menu::display_second_menu() {   //显示菜单功能（登陆后
	cout << "——————— 欢迎使用！ ————————" << endl;
	cout << endl;
	cout << "           请您选择以下菜单功能           " << endl;
	cout << "              1.查看所有购买人信息        " << endl;
	cout << "              2.查询购买人信息            " << endl;
	cout << "              3.查看所有书籍信息          " << endl;
	cout << "              4.查询书籍信息              " << endl;
	cout << "              5.查看所有历史订单          " << endl;
	cout << "              6.查询历史订单              " << endl;
	cout << "              7.添加发票                  " << endl;
	cout << "              8.查询发票                  " << endl;
	cout << "              9.退出                      " << endl;
	cout << "—————————————————————" << endl;
}
void menu::switch_second_menu() {    //选择菜单功能（跳转 登陆后
	cout << endl;
	cout << "请输入您的选择：";

	int cmd;  //选择菜单功能编号
	cin >> cmd;

	switch (cmd) {
	case 1: 
		system("cls");
		tx.display_buyerlist();
		int n;
		cout << endl;
		cout << "*******************************" << endl;
		cout << " 请您选择以下菜单功能：" << endl;
		cout << " 1.添加购买人信息" << endl;
		cout << " 2.返回主菜单" << endl;
		cout << endl;
		cout << "请输入您的选择：" << endl;
		cin >> n;
		if (n == 1)
			bm.add_buyer();
		else {
			if (n == 2)
				men.display_second_menu();
			else {
				cout << endl;
				cout << "***  输入有误！***" << endl;
				cout << "*** 自动跳转回主菜单！***" << endl;
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
		cout << " 请您选择以下菜单功能：" << endl;
		cout << " 1.添加书籍信息" << endl;
		cout << " 2.返回主菜单" << endl;
		cout << endl;
		cout << "请输入您的选择：" << endl;
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
				cout << "***  输入有误！***" << endl;
				cout << "*** 自动跳转回主菜单！***" << endl;
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
		cout << " 请您选择以下菜单功能：" << endl;
		cout << " 1.添加订单信息" << endl;
		cout << " 2.返回主菜单" << endl;
		cout << endl;
		cout << "请输入您的选择：" << endl;
		cin >> n;
		if (n == 1) {
			ol.create_order();
		}
		else {
			if (n == 2)
				men.display_second_menu();
			else {
				cout << endl;
				cout << "***  输入有误！***" << endl;
				cout << "*** 自动跳转回主菜单！***" << endl;
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
		cout << "请输入发票编号：";
		cin >> n;
		re.get_receipt_by_id(n);
		break;
	case 9: 
		cout << endl;
		cout << "———————欢迎下次使用！———————" << endl;
		exit(1);
		break;
	default: 
		cout << endl;
		cout << "***  输入有误！***" << endl;
		men.switch_second_menu();
		break;
	}
}
void menu::return_second_menu() {    //返回or退出   (登陆后 
	char ch;
	cout << endl;
	cout << "如需返回,请输入R" << endl;
	cout << "如需退出,请输入E" << endl;
	cout << endl;
	cout << "请输入您的选择：";

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
		cout << "———————欢迎下次使用！———————" << endl;
		exit(1);
		break;
	case 'e': cout << endl;
		cout << "———————欢迎下次使用！———————" << endl;
		exit(1);
		break;
	default: cout << endl;
		cout << "***  输入有误！***" << endl;
		men.return_second_menu();
		break;
	}
}
int menu::testadm_menu() {};
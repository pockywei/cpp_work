#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <map>
#include <algorithm>
#include "administrator.h"
#include "buyer_managerment.h"
#include "receipt.h"

using namespace std;

class menu {
public:
	void display_menu();   //��ʾ�˵����� 
	void switch_menu();    //ѡ��˵����ܣ���ת 
	void return_menu();    //����or�˳� 
	void display_second_menu();  //��ʾ�˵����ܣ���½��
	void switch_second_menu();   //ѡ��˵����ܣ���ת ��½��
	void return_second_menu();   //����or�˳�  ����½�� 
	int testadm_menu();  //��֤ע���������Ƿ�Ϊ����Ա
};


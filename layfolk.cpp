#include "layfolk.h"

void layfolk::display()
{
	cout << "������������" << name << "\t";
	cout << "�����˱�ţ�" << buyerID << "\t";
	cout << "������Ϊ��ͨ��" << "\n";
	cout << "��ַ��" << address << "\n\n";
}
void layfolk::setpay(double p) {
	pay = pay + p;
}
#include "honoured_guest.h"

void honoured_guest::display() {
	cout << "������������" << name << "\t";
	cout << "�����˱�ţ�" << buyerID << "\t";
	cout << "������Ϊ������ۿ���Ϊ��" << discount_rate * 100 << "% \n";
	cout << "��ַ��" << address << "\n\n";
}
void honoured_guest::setpay(double p)
{
	pay = pay + (1 - discount_rate) * p;
}
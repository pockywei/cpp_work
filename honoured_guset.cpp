#include "honoured_guest.h"

void honoured_guest::display() {
	cout << "购书人姓名：" << name << "\t";
	cout << "购书人编号：" << buyerID << "\t";
	cout << "购书人为贵宾！折扣率为：" << discount_rate * 100 << "% \n";
	cout << "地址：" << address << "\n\n";
}
void honoured_guest::setpay(double p)
{
	pay = pay + (1 - discount_rate) * p;
}
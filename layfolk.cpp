#include "layfolk.h"

void layfolk::display()
{
	cout << "购书人姓名：" << name << "\t";
	cout << "购书人编号：" << buyerID << "\t";
	cout << "购书人为普通人" << "\n";
	cout << "地址：" << address << "\n\n";
}
void layfolk::setpay(double p) {
	pay = pay + p;
}
#include <string>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <map>
//#include <windows.h>
#include <algorithm>
//#include "book.h"

class buyer {
protected:
	string name;
	int buyerID;
	string address;
	double pay;
	//vector<book> fo_list;
public:
	buyer();
	buyer(string n, int b, string a, double p);
	string getbuyname();
	string getaddress();
	//void setbuyerbooks(book);
	//vector<book> returnbooklist();
	double getpay();
	int getid();
	virtual void display() = 0;
	virtual void setpay(double = 0) = 0;
};
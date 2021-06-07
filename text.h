#include<iostream>
#include<fstream>
#include <stdlib.h>
#include <vector>
#include <map>
//#include <windows.h>
#include <algorithm>
#include<string>

using namespace std;

class text {
public:
	void write_buyerlist();
	void write_booklist();
	void write_orderlist();
	void write_receipt();
	void display_buyerlist();
	void display_booklist();
	void display_orderlist();
	void display_receipt();
};
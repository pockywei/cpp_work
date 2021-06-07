#include "buyer_managerment.h"

buyer_managerment::buyer_managerment() {}
buyer_managerment::buyer_managerment(vector<buyer*>) {}
void buyer_managerment::add_buyer() {}
vector<buyer*> buyer_managerment::return_buyerlist() {}
vector<buyer*> buyer_managerment::get_buyer_by_id(int id) {
	char c[2] = { '1','2' };
	string a=c, b=c;
	buyer* buyer_ptr = new member(a,1,2,b,1.1);
	vector <buyer*> buyer_ptr_list;
	buyer_ptr_list.push_back(buyer_ptr);
	return buyer_ptr_list;
}
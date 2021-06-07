#include "buyer.h"

//class buyer;
class member :public buyer {
private:
	int leaguer_grade;
public:
	member(string n, int b, int l, string a, double p) {
		leaguer_grade = 1;
	}
	void display();
	void setpay(double p);
};

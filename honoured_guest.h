#include "buyer.h"

//class buyer;
class honoured_guest :public buyer {
	double discount_rate;
public:
	honoured_guest(string n, int b, double r, string a, double p) {
		discount_rate = r;
	}
	void display();
	void setpay(double p);
};
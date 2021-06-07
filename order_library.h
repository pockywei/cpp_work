#include "book_warehouse.h"
#include "order.h"

class order_library {
private:
	order order_instance;
public:
	void create_order();
	void search_order(int);
};

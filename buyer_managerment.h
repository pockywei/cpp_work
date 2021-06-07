#include "honoured_guest.h"
#include "layfolk.h"
#include "member.h"

class buyer_managerment {
private:
	vector<buyer*> buyerlist;
public:
	buyer_managerment();
	buyer_managerment(vector<buyer*>);  //��ȡ�������б�
	void add_buyer();  //���ӹ�������Ϣ
	vector<buyer*> return_buyerlist();  //�鿴�������б�
	vector<buyer*> get_buyer_by_id(int);  //ͨ����Ų��ҹ�������Ϣ
};

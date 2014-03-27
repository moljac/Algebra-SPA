# if ! defined	__LIST_H__
# define		__LIST_H__
# include <string>

# include "ListNode.h"

class List
{
public:
	List();
	bool is_empty();
	std::string first();
	
	bool del(int position);
	bool insert(std::string value, int position);

	//void del(int position);
	//void insert(srting value, int position);
	//string del(int position);
	//string insert(srting value, int position);

private:

	ListNode* Head;
	ListNode* Tail;

};
#endif
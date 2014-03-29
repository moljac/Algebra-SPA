# include <string>

# include "List.h"

List::List()
{
}

bool List::is_empty()
{
	return true;
};


std::string List::first()
{
	return "first";
}

bool List::insert(std::string value, int position)
{

	ListNode* ln_new = new ListNode();
	ln_new->Value = value; 

	//find_position(position);
	//ln_new->Next = 

	return true;
}

bool List::del(int position)
{
	return true;
}

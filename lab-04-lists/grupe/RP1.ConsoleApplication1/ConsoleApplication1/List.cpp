# include "List.h"

 List::List()
 {
	 Head = new ListNode();
	 Tail = new ListNode();

	 Head->Next = Tail;

	 return;
 }

bool List::is_empty()
{
	if (Head->Next == Tail)
	{
		return true;
	}

	return false;
}

void List::insert(int i)
{
	ListNode* list_node_new = new ListNode();

	(*list_node_new).Value = i;
	(*list_node_new).Next = Tail;

	return;
};

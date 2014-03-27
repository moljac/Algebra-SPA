
# include "List.h"

int main()
{
	List list1 = List();

	bool l1_empty = list1.is_empty();

	List* list2 = new List();

	list1.insert(6);
	list1.insert(42);
	list1.insert(99);


	delete list2;

	return 0;
}
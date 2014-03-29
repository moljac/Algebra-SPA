#ifndef LIST_H
#define LIST_H

# include "ListNode.h"

class List
 {
	private:
		ListNode* Head;
		ListNode* Tail;

	public:
		List();

		void insert(int i, int pos);
		void del(int i);
		bool is_empty();
		bool first();

};
#endif
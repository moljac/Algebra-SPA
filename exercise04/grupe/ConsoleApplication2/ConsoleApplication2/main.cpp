
# include "List.h"



int main()
{
	List list01 = List();
	List* list02 = new List();

	list01.first();
	list01.is_empty();
	
	list01.insert("ime", 5);
	list01.del(2);
	//list01.end();
	//list01.read(4);
	//list01.find("trazeni string");

	delete list02;

	return 0;
}
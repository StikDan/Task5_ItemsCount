#include <iostream>
#include "list.h"

int main()
{
	ListActions lists;
	ListItem* newList = nullptr;

	lists.AddFirst(1, "Test1", 30, 30, newList);
	lists.AddFirst(1, "Test2", 30, 30, newList);
	lists.AddFirst(1, "Test3", 30, 30, newList);

	std::cout << std::endl << std::endl;
	lists.PrintList(newList);

	lists.ItemsCount(newList);

	return 0;
};
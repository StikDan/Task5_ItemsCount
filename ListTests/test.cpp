#include "pch.h"
#include "list.h"
#include <iostream>

TEST(TestsForList, TwoItems)
{
	ListActions lists;
	ListItem* newList = nullptr;

	lists.AddFirst(1, "Test1", 30, 50, newList);
	lists.AddFirst(2, "Test2", 40, 90, newList);

	int count = lists.ItemsCount(newList);

	EXPECT_EQ(count, 2);
}

TEST(TestsForList, ItemsWithOneID)
{
	ListActions lists;
	ListItem* newList = nullptr;

	lists.AddFirst(1, "Test1", 30, 30, newList);
	lists.AddFirst(1, "Test2", 30, 30, newList);

	int count = lists.ItemsCount(newList);

	EXPECT_EQ(count, 2);
}

TEST(TestsForList, FiveItems)
{
	ListActions lists;
	ListItem* newList = nullptr;

	lists.AddFirst(1, "Banana", 30, 130, newList);
	lists.AddFirst(2, "Apple", 40, 90, newList);
	lists.AddFirst(3, "Melon", 9, 3, newList);
	lists.AddFirst(4, "Pineapple", 500, 12, newList);
	lists.AddFirst(5, "Cucumber", 100, 10, newList);

	int count = lists.ItemsCount(newList);

	EXPECT_EQ(count, 5);
}
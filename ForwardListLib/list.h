#pragma once

#define WIN32_LEAN_AND_MEAN             // Исключите редко используемые компоненты из заголовков Windows

struct ListItem
{
    int id;
    char name[30];
    float price;
    float count;
    ListItem* next;
};

class ListActions
{
public:
	int ItemsCount(ListItem* list);
    void AddFirst(int newId, const char* newName,
        float newPrice, float newCount, ListItem* &first);
    void PrintItem(ListItem* item);
    void PrintList(ListItem* firstItem);
};
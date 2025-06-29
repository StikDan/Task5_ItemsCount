// ForwardListLib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "list.h"
#include <iostream>

// TODO: Это пример библиотечной функции.
int ListActions::ItemsCount(ListItem *list)
{
    if (list == nullptr)
    {
        std::cout << "Count of items: 0";
        return 0;
    }

    auto temp = list;
    int count = 0;

    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
        
    std::cout << "Count of items: " << count << std::endl;
    return count;
}

void ListActions::AddFirst(int newId, const char* newName, float newPrice, float newCount, ListItem*& first)
{
    ListItem* temp = new ListItem;

    temp->id = newId;
    strcpy_s(temp->name, newName);
    temp->price = newPrice;
    temp->count = newCount; 
    temp->next = first;

    first = temp;

    std::cout << "Add first item success!" << '\t';
}

void ListActions::PrintItem(ListItem* item)
{
    if (item == nullptr) return;
    std::cout << "Ид товара: " << item->id << std::endl;
    std::cout << "Название: " << item->name << std::endl;
    std::cout << "Цена: " << item->price << " руб." << std::endl;
    std::cout << "Количество: " << item->count << " шт." << std::endl;
    std::cout << std::endl;
}

void ListActions::PrintList(ListItem* firstItem)
{
    auto temp = firstItem;

    while (temp != nullptr)
    {
        PrintItem(temp);
        temp = temp->next;
    }
}
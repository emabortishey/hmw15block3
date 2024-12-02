#include "Stack.h"

Stack::Stack() : head{ nullptr } {}

void Stack::Clear()
{
	head = nullptr;
}

bool Stack::IsEmpty()
{
	return head == nullptr;
}

int Stack::GetCount()
{
	int size = 0;
	Node* curr = head;
	while (curr != nullptr)
	{
		size++;
		curr = curr->next;
	}
	return size;
}

void Stack::Push(int c)
{
	Node* newnode = new Node{ c };
	newnode->next = head;
	head = newnode;
}

void Stack::Print()
{
	Node* curr = head;
	while (curr != nullptr)
	{
		cout << curr->data << ' ';
		curr = curr->next;
	}
}

Node* Stack::Pop()
{
	Node* returnin = head;
	head = head->next;
	return returnin;
}


Node* Stack::Copy()
{
	Stack copycat;
	Node* curr = head;
	int* mass_buff = new int[GetCount()];
	int indx = GetCount()-1;
	while (curr != nullptr)
	{
		mass_buff[indx--] = curr->data;
		curr = curr->next;
	}
	curr = head;
	for(int i = 0; i< GetCount();i++)
	{
		copycat.Push(mass_buff[i]);
	}
	return copycat.head;
}

Node* Stack::operator+(Stack obj)
{
	Stack plus;
	plus.head = Copy();
	Node* curr = plus.head;
	while (curr->next != nullptr)
	{
		curr = curr->next;
	}
	curr->next = obj.Copy();

	return plus.head;
}
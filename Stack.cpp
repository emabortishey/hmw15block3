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
	Node* curr = head->next;
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
#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* next;

	Node(int data) : data(data), next(nullptr) {}
};

class Stack
{
	Node* head;
public:
	Stack();
	void Clear();
	bool IsEmpty();
	int GetCount();
	void Push(int c);
	void Print();
	Node* Pop();
	Node* Copy();
};
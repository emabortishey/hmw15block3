#include "Stack.h"

int main()
{
	setlocale(LC_ALL, "russian");

	Stack test_obj;

	int mass[4]{ 1,2,3,4 };

	for (int elem : mass)
	{
		test_obj.Push(elem);
	}

	test_obj.Print();

	Stack test_obj2;

	int mass2[4]{ 5,2,7,3 };

	for (int elem : mass2)
	{
		test_obj2.Push(elem);
	}

	cout << test_obj.GetCount();

	Node* curr = test_obj * test_obj2;
	while (curr != nullptr)
	{
		cout << curr->data << ' ';
		curr = curr->next;
	}

	return 0;
}
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

	return 0;
}
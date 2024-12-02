#include "Stack.h"

int main()
{
	setlocale(LC_ALL, "russian");

	// первый обьект
	Stack test_obj;

	// массив для заполнения обьекта 1
	int mass[4]{ 1,2,3,4 };

	// заполнение обьекта 1
	for (int elem : mass)
	{
		test_obj.Push(elem);
	}

	cout << "\nПервый список: ";
	test_obj.Print();

	// второй обьект
	Stack test_obj2;

	// массив для заполнения обьекта 2
	int mass2[4]{ 5,2,7,3 };

	// заполнение обьекта 2
	for (int elem : mass2)
	{
		test_obj2.Push(elem);
	}

	cout << "\nВторой список: ";
	test_obj2.Print();

	// все проверки, 2/3 закоментированы для удобства проверки при необходимости

	//Node* curr = test_obj.Copy();
	//Node* curr = test_obj + test_obj2;
	Node* curr = test_obj * test_obj2;
	cout << "\n\nСписок получившийся после теста: ";
	while (curr != nullptr)
	{
		cout << curr->data << ' ';
		curr = curr->next;
	}

	return 0;
}
#include "Stack.h"

int main()
{
	setlocale(LC_ALL, "russian");

	// ������ ������
	Stack test_obj;

	// ������ ��� ���������� ������� 1
	int mass[4]{ 1,2,3,4 };

	// ���������� ������� 1
	for (int elem : mass)
	{
		test_obj.Push(elem);
	}

	cout << "\n������ ������: ";
	test_obj.Print();

	// ������ ������
	Stack test_obj2;

	// ������ ��� ���������� ������� 2
	int mass2[4]{ 5,2,7,3 };

	// ���������� ������� 2
	for (int elem : mass2)
	{
		test_obj2.Push(elem);
	}

	cout << "\n������ ������: ";
	test_obj2.Print();

	// ��� ��������, 2/3 ��������������� ��� �������� �������� ��� �������������

	//Node* curr = test_obj.Copy();
	//Node* curr = test_obj + test_obj2;
	Node* curr = test_obj * test_obj2;
	cout << "\n\n������ ������������ ����� �����: ";
	while (curr != nullptr)
	{
		cout << curr->data << ' ';
		curr = curr->next;
	}

	return 0;
}
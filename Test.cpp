#include <iostream>

using namespace std;

void swap_pointer(int *ptr1, int *ptr2);

int main()
{
	int num1{ 4 };
	int num2{ 5 };

	int* ptr1{ &num1 };
	int* ptr2{ &num2 };

	cout << num1 << endl;
	cout << num2 << endl;

	swap_pointer(ptr1, ptr2);

	cout << num1 << endl;
	cout << num2 << endl;

	return 0;
}

void swap_pointer(int* ptr1, int* ptr2)
{
	int temp {* ptr1};

	*ptr1 = *ptr2;
	*ptr2 = temp;
}
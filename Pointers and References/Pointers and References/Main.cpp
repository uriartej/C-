#include<iostream>;
using std::cout;

int main()
{
	int num1 = 1, num2 = 2;
	int *ptr = &num1;
	cout << num1 << '\t' << num2 << '\t' << ptr << "\t\t" << *ptr << '\n';  //ptr outputs the adress, *ptr outputs the value

	// First: change the value of a pointer:
	ptr = &num2;
	cout << num1 << '\t' << num2 << '\t' << ptr << "\t\t" << *ptr << '\n';

	// Second: change the value to which the pointer points:
	*ptr = 3;
	cout << num1 << '\t' << num2 << '\t' << ptr << "\t\t" << *ptr << '\n';

	int x = 5;
	int* y = &x;

	std::cout << &x << " " << *y << std::endl;

	return 0;

}
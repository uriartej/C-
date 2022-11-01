#include <iostream>;
#include <typeinfo>
		
int main()
{
	/// Print the variables before and afer the assignements to check whether your predictions are correct.
	int i = 0, & r = i;
	const int ci = i, & cr = ci;

	auto a = r;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	const auto f = ci;
	auto& g = ci;
	
	a = 42;
	b = 42;
	c = 42;
	*d = 42;
	e = &c;

	/// Determine the types deduced in each of the following definitons. Write a program to see whether you were correct.

	const int i = 42; //  i = const int
	auto j = i;  // j = int
	const auto& k = i; // k = int&
	auto* p = &i; // p = const int*
	const auto j2 = i, &k2 = i; // j = const int || k = const int&

	std::cout << "j is " << typeid(j).name() << "\nk is " << typeid(k).name()
		<< "\np is " << typeid(p).name() << "\nj2 is " << typeid(j2).name()
		<< "\nk2 is " << typeid(k2).name() << '\n';
	

	

	

	return 0;





}


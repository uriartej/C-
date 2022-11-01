#include <iostream>

int main() {

	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl; // 1st value is greater than 2nd value prints out 32
	std::cout << u - u2 << std::endl; // 1st value is less than 2nd value, prints out 4294967264; result can't be negative 
									  // involving unsigned and sign types of numbers

	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl; // both are type int, product is correct
	std::cout << i - i2 << std::endl; // both are type int, product is correct

	std::cout << i - u << std::endl;  // one is type int the other is type unsigned, result is not negative, answer is correct
	std::cout << u - i << std::endl;  // one is type int the other is type unsigned, result is not negative, answer is correct

	return 0;
}
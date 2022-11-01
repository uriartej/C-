#include <iostream>

int main()
{
	int val1 = 0, val2 = 0;

	if (std::cin >> val1) {

		while (std::cin >> val2) {

			if (val1 < val2) {

				for (int i = val1; i <= val2; i++) {

					std::cout << i << std::endl;
				}
			}
			else {
				std::cout << "First value is not greater than the second value" << std::endl;
			}
		}
	}
	return 0;
}
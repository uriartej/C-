#include <iostream>;
#include "Sales_item.h"

int main()
{
	Sales_item total; //varable to hold data for next transactions
	
	if (std::cin >> total) //asking the user to input first set of data
	{
		Sales_item trans; //variable to hold data to compare with variable total

		while (std::cin >> trans) //asking the user to input second set of data 
		{
			if (total.isbn() == trans.isbn()) //comparing if both sets of data match
			{
				total += trans; // if they do match then total will be added 
			}

			else
			{
				std::cout << total << std::endl; // if they dont match then output statement will be shown with the updated value from the if statement
				total = trans; // since the values are different, total is now the new data
			}
		}
		std::cout << total << std::endl; // statement is shown with the number of transactions
	}
	else
	{
		std::cerr << "No data ?" << std::endl; // if no input, this statement is shown
		return -1;
	}

	return 0;
}
#include <iostream>;
#include <string>;
#include "Sales_data.h";

struct Sale_data
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

};
/* Page 22 Exercise 1.22:
Write a program that reads several transactions for the same ISBN.
Write the sum of all the transactions that were read.

int main()
{
	Sale_data book;
	double price;
	std::cin >> book.bookNo >> book.units_sold >> price;
	book.revenue = book.units_sold * price;
	std::cout << book.bookNo << " " << book.units_sold << " "
		<< book.revenue << " " << price;
	
	return 0;
	}
*/

/* Page 24 Exercise 1.23
Write a program that reads several transactions and counts how 
many transactions occur for each ISBN.


int main()
{
	Sale_data book1, book2;
	double price1, price2;
	std::cin >> book1.bookNo >> book1.units_sold >> price1;
	std::cin >> book2.bookNo >> book2.units_sold >> price2;
	book1.revenue = book1.units_sold * price1;
	book2.revenue = book2.units_sold * price2;

	if (book1.bookNo == book2.bookNo)
	{
		unsigned totalCnt = book1.units_sold + book2.units_sold;
		double totalRevenue = book1.revenue + book2.revenue;
		std::cout << book1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if (totalCnt != 0)
		{
			std::cout << totalRevenue / totalCnt;
		}
		else
		{
			std::cout << "(no sales)" << std::endl;
		}
		return 0;

	}
	else
	{
		std::cout << "Data must refer to same ISBN" << std::endl;
		return -1;
	}

}
*/

/* Page 25 Exercise 1.25
Compile and execute the bookstore program presented in this section.

int main() {
	Sale_data total;
	double totalPrice;

	if (std::cin >> total.bookNo >> total.units_sold >> totalPrice)
	{
		total.revenue = total.units_sold * totalPrice;
		Sale_data trans;
		double transPrice;

		while (std::cin >> trans.bookNo >> trans.units_sold >> transPrice)
		{
			trans.revenue = trans.units_sold * totalPrice;
			if (total.bookNo == trans.bookNo)
			{
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;
			}
			else
			{
				std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
				if (total.units_sold != 0)
				{
					std::cout << total.revenue / total.units_sold << std::endl;
				}
				else
				{
					std::cout << "no sales" << std::endl;
				}
				total.bookNo = trans.bookNo;
				total.units_sold = trans.units_sold;
				total.revenue = trans.revenue;
			}
		}
		std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
		if (total.units_sold != 0)
		{
			std::cout << total.revenue / total.units_sold;
		}
		else
		{
			std::cout << "No sales" << std::endl;
		}
		return 0;
	}
	else
	{
		std::cerr << "No data inputed" << std::endl;
		return -1;
	}
}
*/
int main()
{
	Sales_data data1, data2;

	// read into data1 and data2
	// check whether data 1 and data2 have the same ISBN
	// and if so print the sum of data1 and data2
	double price = 0;

	// price per book, used to calculate total revenue
	// read the first transactions: ISBN, number of books sold, pricer per book
	// calculate total revenue from price and units sold
	std::cin >> data1.BookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold * price;

	std::cin >> data2.BookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;

	// Check that the transactions are for the same ISBN. If so, we'll print thier
	// sum, otherwise, we'll print an error message:
	if (data1.BookNo == data2.BookNo) {
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		// print: ISBN, total sold, total revenue, average price per book
		std::cout << data1.BookNo << " " << totalCnt << " " << totalRevenue
			<< " ";
		if (totalCnt != 0)
			std::cout << totalRevenue / totalCnt << std::endl;
		else
			std::cout << "(no sales)" << std::endl;
		return 0; // indicate success
	}
	else { // transactions weren't for the same ISBN
		std::cerr << "Data must refer to the same ISBN" << std::endl;
		return -1; // indication failure
	}

}
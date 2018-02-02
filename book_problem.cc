#include <iostream>
#include "./primerSourceCode/1/Sales_item.h"

int main(){
	Sales_item book;
	// read ISBN, number of copies sold, and sales price.
	std::cin >> book;
	// write ISBN, number of copies sold, total revenue
	// and average sales price.
	std::cout << book << std::endl;
	return 0;
}



/*

*Header for the standard library are enclosed in angle
brackets (< >).
*Non-standard headers are enclosed
in double quotes(" ").

*/
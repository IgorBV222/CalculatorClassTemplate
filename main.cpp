#include <iostream>
#include "Calculator.h"
int main() {
	
	Calculator <double, int> c;

	try	{
		std::cout << c.sum(5.8, 2.2) << '\n';
		std::cout << c.sub(9.4, 2) << '\n';
		std::cout << c.mult(5, 3) << '\n';
		std::cout << c.div(4.4, 8.3) << '\n';


		std::cout << c.sum(4, 5) << '\n';
		std::cout << c.sub(7, 14) << '\n';
		std::cout << c.mult(3.4, 2) << '\n';
		std::cout << c.div(7.5, 0) << '\n';
	}
	catch (const std::exception& e)	{
		std::cout << "ERROR: " << e.what() << std::endl;
	}
	
	return 0;
}
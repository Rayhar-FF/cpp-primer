#include <iostream>

int main()
{
	int sum = 0, value = 0;                      // *** int type variables sum & value.
	while (std::cin >> value)					 // *** While Inputting values to file keep inputting to value. 
												 // ***	ctrl+z to end inputs stream on windows.
		sum += value;							 // *** sum = sum + value(In other words add value to sum).
	std::cout << "Sum is: " << sum << std::endl; // *** Output sum of values.

	return 0;									 // *** return success.
}

//*** CTRL+Z to break while loop inputting to value during execution ***///
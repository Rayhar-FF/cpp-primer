#include <iostream> //Header to include the IO-stream library.

int main() // Main function with no parameters.
{
	std::cout << "Enter two numbers:" << std::endl;            // Console output to prompt the user to enter two numbers.
	int v1 = 0, v2 = 0;										   // Variables 1 and 2 that will be used to input store the two integers of type int.
	std::cin >> v1 >> v2;                                      // input prompt using cin to input the values of v1 and v2 using cin from std.
	std::cout << "The sum of" << v1 << " and " << v2 << " is "
		<< v1 + v2 << std::endl;							   // Console output to print the result.
	return 0;												   // Return 0 if the program was run successfully.
}
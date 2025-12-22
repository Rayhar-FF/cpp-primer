#include <iostream>

int main()
{
	int sum = 0; // sum is defined and initialized
										
										// *** Each for statement has a header and a body.
										// *** The header itself has an init statement (int val = 0, a condition(val<=10), and expression(++val).
	for (int val = 0; val <= 10; ++val) // *** val is defined in the for loop(int val = 0). 
										// *** Condition (when val<=10) so the loop terminates at 10.
										// *** Expression, Increment val(++val)
	
	sum += val;							// ***Add the increasing amount of val to sum on each iteration.

	std::cout << "Sum of 1 to 10 inclusive of 10 is " << sum << std::endl; // *** Print the value of sum to the console.
																		   // *** std::endl to (namespace std, endl starts a new line)
																	       // *** endl also flushes the stream.

	return 0;                           // *** return sucess if program reaches this line.
}
//A while statement repeatedly executes a section of code so long as a given condition
//is true.We can use a while loop to write a program to sum the numbers from 1
//through 10 inclusive as follows.

#include <iostream>

int main()
{
	int sum = 0, val = 1;

	// Executing while as long as val is less than or equal to 10

	while (val <= 10)
	{
		sum += val; // adds sum + val to sum, same as typing sum = sum + val
		++val; // Increment val by 1.(Add 1 to val || val = val + 1)
	}

	std::cout << "Sum of 1 to 10 inclusive of 10 is " << sum << std::endl;

	return 0;
}

// The format of a while loop is as follows:

//while (condition)
//{
//	execute this code block. Until condition is false.
//}
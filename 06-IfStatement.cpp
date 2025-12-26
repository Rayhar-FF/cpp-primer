// *** C++ provides an if statement that supports conditional executtion.

#include <iostream>

int main()
{
	int currVal = 0, val = 0;          // *** currVal is the number being counted. New values are read in to val.
	if (std::cin >> currVal)           // *** Evaluate the condition currVal Check if data in currVal is valid. Do this to this input from the console.
									   
	{
		int cnt = 1;				   // *** Store count for current value being processed, 1 bu default.
		while (std::cin >> val)        // *** while inputting values , input to val.
		{
			if (val == currVal)		   // *** If values are the same add 1 to cnt. the == operator checks for equiality.
			{
				++cnt;				   // *** Increment count by 1(++) operator if val == currVal.
			}
			else					   // *** Otherwise or If the values are not same.
									   
			{
				std::cout << currVal << " occurs " << cnt << " times" << std::endl; // *** Output to console the count of currVal. 
				currVal = val;														// *** CurrVal = val & add 1 to count. Reset
				cnt = 1;															// *** Reset count.
			}											
			
		}
		std::cout << currVal << " occurs " << cnt << " times" << std::endl;		    // *** Output to console the count of the value.
																					// ### Since the code in the book resets that values of currVal and cnt
	}																				// ### In the else statement the program may sometimes overlook values.
	return 0;																		// ### It should be obvious how to handle this.
}


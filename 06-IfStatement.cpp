// *** C++ provides an if statement that supports conditional executtion.

#include <iostream>

int main()
{
	int currVal = 0, val = 0;          // *** currVal is the number being counted. New values are read in to val.
	if (std::cin >> currVal)           // *** Input the first number to ensure there is data to process. 
									   // ***Input to console current value(currVal).
	{
		int cnt = 1;				   // *** Store count for current value being processed.
		while (std::cin >> val)        // *** while inputting values , input to val.
		{
			if (val == currVal)		   // *** If values are the same add 1 to cnt.
			{
				++cnt;
			}
			else					   // *** If the values are not same.
									   
			{
				std::cout << currVal << " occurs " << cnt << " times" << std::endl; // *** Output to console the count of the value. 
				currVal = val;														// *** CurrVal = val & add 1 to count.
				cnt = 1;
			}
			
		}
		std::cout << currVal << " occurs " << cnt << " times" << std::endl;		    // *** Output to console the count of the value. 
	}
	return 0;
}

// ####### The program above tries to calculate the number of times a number appears in a sequence but sometimes gives incorrect results.
// ####### I will leave it in its current state.
#include "changeUtil.h"

#include <stdio.h>
#include <math.h>

/**
* 	calcChange function.
*	
*	Calculates how many different types of coins are needed.
*	Figured out how to return array from function using pointers @ https://www.tutorialspoint.com/cprogramming/c_return_arrays_from_function.htm
*
* 	@param moneyOwed
*   @param moneyPaid
*	@param change[] 
*/
void calcChange(float moneyOwed, float moneyPaid, int change[]) {
	// Obtain the difference
	float diff = ceilf((moneyPaid - moneyOwed) * 100) / 100;
	
	// Gets the amount of Dollars
	change[0] = diff/1;
	diff -= change[0];
	
	// Gets the amount of Quarters (Rounds Up)
	change[1] = ceilf((diff/0.25) * 100)/100;
	diff -= (change[1] * 0.25);
	
	// Gets the amount of Dimes
	change[2] = ceilf((diff/0.10) * 100)/100;
	diff -= (change[2] * 0.10);
	
	// Gets the amount of Nickels
	change[3] = ceilf((diff/0.05) * 100)/100;
	diff -= (change[3] * 0.05);
	
	//Gets the amount of Pennies.
	change[4] = ceilf((diff/0.01) * 100)/100;
	diff -= (change[4] * 0.01);
	
}

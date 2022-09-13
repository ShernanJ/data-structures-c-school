#include "changeUtil.h"

#include <stdio.h>
#include <stdlib.h>

/**
*	Assignment 1
*	Shernan Javier
*	991572411
*	June 6, 2021
*	
*	changeCalculator Program
*	
*	Gathers user input on how much user owes, how much user paid then outputs the different types of coins and amount.
*
*/

int main(int argc, char *argv[]) {
	
	// Initialize variables used in user input. Initial value is 0 to prevent errors.
	float moneyOwed = 0.0;
	float moneyPaid = 0.0;
	int change[5] = {0,1,2,3,4};
	
	// Prompts user for the owed amount.
	printf("Enter money owed: $");
	int parseCount = scanf("%f", &moneyOwed);
	
	// Prompts user for the paid amount.
	printf("Enter money paid: $");
	parseCount += scanf("%f", &moneyPaid);
	
	// Validates user input, if user doesn't enter proper inputs, keeps asking.
	while(parseCount != 2 || (moneyOwed <= 0.0 || moneyPaid <= 0.0) || (moneyOwed > moneyPaid)){
		// Checks if user owes more than they paid.
		if(moneyOwed > moneyPaid){
			printf("You owe more than you paid! Try again!\n");
		} else {
			printf("Please check your inputs.\n");
		}
		// Keeps prompting user until proper inputs are accepted.
		printf("Enter money owed: $");
		parseCount = scanf("%f", &moneyOwed);

		printf("Enter money paid: $");
		parseCount += scanf("%f", &moneyPaid);
 	}
	
	// Gets change results
	calcChange(moneyOwed, moneyPaid, change);
	
	// Gets total change amount and outputs.
	float diff = moneyPaid - moneyOwed;
	printf("\nChange Due: $%.2f\n", diff);
	
	// Outputs Coins.
	printf("Dollars: %d\nQuarters %d\nDimes %d\nNickles %d\nPennies %d", change[0], change[1], change[2], change[3], change[4]);
	return 0;
}


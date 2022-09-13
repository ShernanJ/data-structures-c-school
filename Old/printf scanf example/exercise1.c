#include <stdio.h>

void exercise1(void) {
	float pi = (355.0/113.0);
	float multiplier;
	float result;
	
	printf("Please enter your multiplier for the multiplicand value of PI:\n");
	
	int inputCheck = scanf("%f", &multiplier);
	
	if(inputCheck != 1){
		printf("Input Error, please correct your input");
	} else {
		result = pi * multiplier;
		printf("PI * %.3lf = %lf", multiplier, result);
	}
}

#include <stdio.h>
#include <math.h>

void lecture(void){
	int year = 2001;
	double population;
	double answer = 31.02;
	printf("Please enter the population of Canada in %d\n", year);
	
	// Variable names in scanf must be preceded by &
	// The scanf format string should not have \n in it
	// You can print or input more than one variable at a time using more format specifiers starting with %

	int parseCount = scanf("%lf", &population);
	printf("You believe there were %.2lf people in Canada during that time, the correct amount was %.2lf million people", population, answer);
	// The return value of scanf is how many variables were successfully read in or "parsed".	
	if(parseCount != 1) {
		printf("Read error\n");
	}
}

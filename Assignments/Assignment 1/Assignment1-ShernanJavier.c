/*
	Assignment 1 - Sept 22, 2022
	Name: Shernan Javier
	ID: 991572411
	School Email: javiersh@sheridancollege.ca
	Personal Email: shernanjavier@gmail.com
	
	www.shernanjavier.com
	www.linkedin.com/in/shernanjavier
*/

#include <stdio.h>
#include <stdlib.h>

/*
	Initialize Functions:
	
	isPrime = Checks if number is a prime number
	isOddEven = Checks if number is odd or even
	assignMaxMin = Used to take the user input and mark the Max and Min numbers.
	displayMaxMin = Used to properly display which numbers are the Max and Min for the output table.
	
*/
char* isPrime(int num);
char* isOddEven(int num);
void assignMaxMin(int numArr[], int count);
char* displayMaxMin(int num);
int calculateSum(int numArr[], int count);
float calculateAvg(int sum, int count);

/*
	Initialize Global Variables:
	max = Maximum Integer Number
	min = Minimum Integer Number
*/

int max, min;

int main(int argc, char *argv[]) {
	
	// Initialized variable to be used for user input.
	int count, sum;
	
	printf("Welcome to Shernan's Assignment 1!\n");
	
	// Prompts user to enter the size of the array.
	printf("Please enter how many numbers you want to enter: ");
	scanf("%d", &count);
	
	// Initialize the integer array with the amount of elements user has specified.
	int numArr[count];
	
	// Read the User Input values
	for(int i = 0; i < count; i++) {
		printf("Enter a Integer value for number %d: ", (i+1));
		scanf("%d", &numArr[i]);
	}
	
	// Assign max and min value
	assignMaxMin(numArr, count);
	
	// Print out table
	printf("\nSr.  Number   Prime   Odd/Even   Min/Max\n");
	for(int i = 0; i < count; i++) {
		printf("%3d%8d%8s%11s%10s", (i+1), numArr[i], isPrime(numArr[i]), isOddEven(numArr[i]), displayMaxMin(numArr[i]));
		printf("\n");
	}
	
	sum = calculateSum(numArr, count);
	
	printf("\nSum%8d\nAvg%8.1f", sum, calculateAvg(sum, count));
	return 0;
}

/*
	Checks if the number is a Prime Number.
*/
char* isPrime(int num) {
	for (int i = 2; i < num; i++) {
		if(num % i == 0) {
			return "No";
		}	
	}
	return "Yes";
}

/*
	Checks if the number is Odd or Even.
*/
char* isOddEven(int num) {
	if(num % 2 == 0) {
		return "Even";
	}
	return "Odd";
}

/*
	Takes array list of numbers that user has entered then marks the maximum and minimum numbers.
*/
void assignMaxMin(int numArr[], int count) {
	max = numArr[0];
	min = numArr[0];
	
	for(int i = 0; i < count; i++) {
		if(numArr[i] > max) {
			max = numArr[i];
		}
		if(numArr[i] < min) {
			min = numArr[i];
		}
	}
}

/*
	Checks if the current number being printed is the Max or Min numbers. 
	If neither, prints nothing for the Max/Min column.
*/
char* displayMaxMin(int num) {
	if (num == max) {
		return "Max";
	}
	if (num == min) {
		return "Min";
	}
	return " ";
}

/*
	Calculates the sum of all numbers.
*/
int calculateSum(int numArr[], int count) {
	int sum = 0;
	for(int i = 0; i < count; i++) {
		sum += numArr[i];
	}
	return sum;
}

/*
	Calculates the average of all the numbers.
*/
float calculateAvg(int sum, int count) {
	return (float)sum/count;
}
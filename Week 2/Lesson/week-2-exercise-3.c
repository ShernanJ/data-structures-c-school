/*
	Array Exercise 3
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i;
	int multiple = 2;
	int arr1[5];
	int calc;
	
		printf("Enter Value[0] = ");
		scanf("%d", &arr1[i]);
		printf("\n");
	
	printf("arr1[0] = %d \n", arr1[i]);
	
	for(i = 1; i<5; i++){
		arr1[i] = arr1[i - 1];
		calc = arr1[i] * multiple;
		printf("Value[%d] = %d \n", i, calc);
		multiple += 2;
	}
	
	return 0;
}
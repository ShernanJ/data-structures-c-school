//Shernan Javier

#include <stdio.h>

int main()
{
	int i = 1;
	int val;
	int arr[5];
	int average = 0;
	
	for(i = 1; i<= 5; i++) {
		printf("Enter num%d: ", i);
		scanf("%d", &val);
		arr[i - 1] = val;
		val = 0;
	}
	for(i = 0; i<5; i++){
		average = average + arr[i];
	}
	printf("Average is %d", average);
	
	return 0;
}

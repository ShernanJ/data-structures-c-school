#include <stdio.h>

int main()
{
	int input;
	
	printf("Please enter an integer: ");
	scanf("%d", &input);
	
	if(input % 2 == 0) {
		printf("%d was an even number.", input);
	} else {
		printf("%d was an odd number.", input);
	}
}
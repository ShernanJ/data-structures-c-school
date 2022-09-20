#include <stdio.h>
#include <stdlib.h>


float average(int x, int y, int z);

int main(int argc, char *argv[]) {
	int x,y,z;
	
	printf("Enter number for x: ");
	scanf("%d", &x);
	
	printf("Enter number for y: ");
	scanf("%d", &y);
	
	printf("Enter number for z: ");
	scanf("%d", &z);
	
	printf("The average of x = %d, y = %d, z = %d is %.2f", x, y, z, average(x,y,z));
	
	return 0;
}

float average(int x, int y, int z) {
	return (float)(x + y + z) / 3;
}
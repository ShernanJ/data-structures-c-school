#include <stdio.h>

void lecture(void);
void exercise1(void);

int main (int argc, char** argv) {
	int choice;
	printf("1 for Lecture Code \n2 for Exercise 1:\n");
	int parseCount = scanf("%d", &choice);
	
	if (parseCount != 1){
		printf("Read error\n");
	} else {
		switch(choice){
			case 1: 
				lecture();
				break;
			case 2:
				exercise1();
				break;	
		}
	}
	return 0;
}


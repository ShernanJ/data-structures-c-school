#include <stdio.h>

int main(){
	int oWidth, oHeight, xWidth, xHeight;
	
	puts("Please enter your width for letter O: ");
	scanf("%d", &oWidth);
	
	puts("Please enter your height for letter O: ");
	scanf("%d", &oHeight);
	
	puts("Please enter your width for letter X: ");
	scanf("%d", &xWidth);
	
	puts("Please enter your height for letter X: ");
	scanf("%d", &xHeight);
	
	
	for(int i = 0; i < oHeight; i++) {
		for(int j = 0; j <oWidth; j++) {
			printf("O");
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(int i = 0; i < xHeight; i++) {
		for(int j = 0; j <xWidth; j++) {
			printf("X");
		}
		printf("\n");
	}
	
	return 0;
	
	
	// I wanted to figure out how to use arrays for it. (DOESNT WORK)
	
//	int widths[2];
//	int heights[2];
//	
//	for(int i = 0; i < 1; i++) {
//		switch(i) {
//			case 0:
//				printf("Please enter width: ");
//				scanf("%d", &widths[i]);
//			case 1:
//				printf("Please enter height: ");
//				scanf("%d", &heights[i]);
//		}
//	}
//	
//	for(int i = 0; i < 1; i++) {
//		for(int j = 0; j < heights[i]; j++) {
//			for(int k = 0; k < widths[i]; k++) {
//				switch(i) {
//					case 0:
//						printf("O");
//						break;
//					case 1:
//						printf("X");
//						break;
//				}
//			}
//			printf("\n");
//		}
//	}
}
	
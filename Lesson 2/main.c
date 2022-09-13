#include <stdio.h>
int main()
{
	int x = 20;
	float y = 20.0;
	double z = 2;
	char c = 'a';
	
	
  char string[] = "Hello";
  printf("%s World \n", string);
  printf("int is %d bytes\n float is %f bytes \n double is %lf bytes \n char is %c bytes \n", sizeof(x), sizeof(y), sizeof(z), sizeof(c));
  return 0;
}

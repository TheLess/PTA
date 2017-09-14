#include <stdio.h>

int main(void)
{
	int length = 0;
	int foot = 0, inch = 0;
	
	scanf("%d", &length);
	foot = length / 30.48;
	inch = ((double)length/30.48 - foot)*12;
	printf("%d %d", foot, inch);
	
	return 0;
} 

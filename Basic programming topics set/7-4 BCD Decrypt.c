#include <stdio.h>

int main(void)
{
	int in, out;
	
	scanf("%d", &in);
	
	out = in / 256 * 100 + in / 16 * 10 + in % 16;
	
	printf("%d\n", out);	
} 

#include <stdio.h>

int main(void)
{
	float inf1, inf2;
	char inc;
	int ini;
	
	scanf("%f %d %c %f", &inf1, &ini, &inc, &inf2);
	
	printf("%c %d %.2f %.2f", inc, ini, inf1, inf2);
	
	return 0;
}

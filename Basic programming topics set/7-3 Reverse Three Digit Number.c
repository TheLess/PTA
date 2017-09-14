#include <stdio.h>

int main( void )
{
	int n, a[3], r = 0;
	int i;
	
	scanf("%d", &n);
	
	for(i = 0; i < 3; i++)
	{
		a[i] = n % 10;
		n = n / 10;
	}
	
	r = a[0] * 100 + a[1] * 10 + a[2];
	
	printf("%d\n", r);
	
	
	return 0;
}

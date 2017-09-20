#include <stdio.h>

int main(void)
{
	double d, dt = 1, res, sum = 1;
	double numerator = 1, denominator = 1;
	int i;
	
	scanf("%lf", &d);
	
	for (i = 1; dt >= d; i++)
	{
		numerator *= i;
		denominator *= i * 2 + 1;
		dt = numerator / denominator;
		sum += dt; 
	}
	
	res = sum * 2;
	printf("%.6lf", res);
	
	return 0;
}

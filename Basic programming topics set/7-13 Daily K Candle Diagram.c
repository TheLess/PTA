#include <stdio.h>

int shadow(double Open, double High, double Low, double Close);

int main(void)
{
	double Open, High, Low, Close, d;
	 
	scanf("%lf %lf %lf %lf", &Open, &High, &Low, &Close);
	
	d = Close - Open;
	
	if(d > 0)
	{
		printf("R-Hollow");
	}
	else if(d < 0)
	{
		printf("BW-Solid");
	}
	else
	{
		printf("R-Cross");
	}
	
	shadow(Open, High, Low, Close);
	
	return 0;
}

int shadow(double Open, double High, double Low, double Close)
{
	if(Low < Open && Low < Close)
	{
		if(High > Open && High > Close)
		{
			printf(" with Lower Shadow and Upper Shadow\n"); 
		}
		else
		{
			printf(" with Lower Shadow\n");
		}
	}
	else if(High > Open && High > Close)
	{
		printf(" with Upper Shadow\n"); 
	}
	else
	{
		return 0;
	}
	
	return 1;	
}

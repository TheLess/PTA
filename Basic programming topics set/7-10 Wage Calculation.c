#include <stdio.h>

int main(void)
{
	int year, worktime, wperh;
	double wage;
	
	scanf("%d %d", &year, &worktime);
	
	if(year < 5)
	{
		wperh = 30;
	}
	else
	{
		wperh = 50;	
	}
	
	if(worktime <= 40)
	{
		wage = worktime * wperh;
	}
	else
	{
		wage = (worktime - 40) * wperh * 1.5 + 40 * wperh;
	}
	
	printf("%.2lf", wage);
	
	return 0;
}

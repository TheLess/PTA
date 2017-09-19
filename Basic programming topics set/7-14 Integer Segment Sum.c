#include <stdio.h>

int main(void)
{
	int a, b, sum;
	int i = 0, count;
	
	scanf("%d %d", &a, &b);
	
	for(i = a, sum = 0, count = 0; i <= b; i++)
	{
		printf("%5d", i);
		sum += i;
		count++;
		if(count % 5 == 0){
			printf("\n");
		}
	}
	
	if(count % 5)
	{
		printf("\n");
	}
	
	printf("Sum = %d", sum);
	
	return 0;	
} 

#include <stdio.h>

int main(void)
{
	int n, i, j, k, endn, cnt = 0;
	scanf("%d", &n);
	
	endn = n + 3;
	
	for(i = n; i <= endn; i++)
	{
		for(j = n; j <= endn; j++)
		{
			if(i == j)
			{
				continue;
			}
			
			for(k = n; k <= endn; k++)
			{
				if(j == k || k == i)
				{
					continue;
				}
				
				cnt++;
				
				printf("%d", i * 100 + j * 10 + k);
				
				if(cnt % 6)
				{
					printf(" ");
				}
				else
				{
					printf("\n");
				}
					
			}	
		}	
	}
	 
	return 0;
}

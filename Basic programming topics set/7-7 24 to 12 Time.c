#include <stdio.h>

int main(void)
{
	int inh, inm;
	scanf("%d:%d", &inh, &inm);
	if(inh <= 12)
	{
		if(inh == 12)
		{
			printf("%d:%d PM\n", inh, inm); 	
		}
		else
		{
			printf("%d:%d AM\n", inh, inm); 			
		}	
	}
	else
	{
		inh -= 12;
		printf("%d:%d PM\n", inh, inm); 	
	} 
	
	return 0;
}

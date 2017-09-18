#include <stdio.h>

int main(void)
{
	int x, y, ans, error = 0;
	char op;
	
	scanf("%d %c %d", &x, &op, &y);
	
	switch(op)
	{
		case '+':
			{
				ans = x + y;
				break;
			}
		case '-':
			{
				ans = x - y;
				break;	
			}
		case '*':
			{
				ans = x * y;
				break;
			}
		case '/':
			{
				ans = x / y;
				break;
			}
		case '%':
			{
				ans = x % y;
				break;
			}
		default:
			{
				error = 1;
			}
	} 
	
	if(error)
	{
		printf("ERROR\n");
	}
	else
	{
		printf("%d\n", ans);		
	}
	 
	return 0;
}

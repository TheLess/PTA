#include <stdio.h>

int main( void )
{
	int start = 0, end = 0;
	int start_min = 0, pass_min = 0, end_min = 0;
	const int HTM = 60;
	const int MTH = 100;
	
	scanf("%d %d", &start, &pass_min);
	
	start_min = start / 100 * HTM + start % 100;
	end_min = start_min + pass_min;
	end = (end_min) / 60 * MTH + end_min % 60;
	
	printf("%d\n", end);
	
	return 0;
}

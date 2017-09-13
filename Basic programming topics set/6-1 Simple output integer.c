#include <stdio.h>

void PrintN ( int N );

int main ()
{
    int N;

    scanf("%d", &N);
    PrintN( N );

    return 0;
}

//answer 
void PrintN ( int N )
{
	int i = 0;
	
	for(i = 0; i < N; i++)
	{
		printf("%d\n", i+1);
	}
} 

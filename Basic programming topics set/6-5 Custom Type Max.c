#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Max( ElementType S[], int N );

int main ()
{
    ElementType S[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &S[i]);
    printf("%.2f\n", Max(S, N));

    return 0;
}

//answer
ElementType Max( ElementType S[], int N )
{
	ElementType max = S[0], temp = 0;
	int i = 0;
	
	for( i = 0; i < N; i++ )
	{
		temp = S[i];
		if(temp > max)
		{
			max = temp;
		} 
	}
	
	return max;
	
}


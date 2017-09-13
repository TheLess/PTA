#include <stdio.h>

#define MAXN 10

double f( int n, double a[], double x );

int main()
{
    int n, i;
    double a[MAXN], x;
				
    scanf("%d %lf", &n, &x);
    for ( i=0; i<=n; i++ )
        scanf("%lf", &a[i]);
    printf("%.1f\n", f(n, a, x));
    return 0;
}

//answer
double f( int n, double a[], double x )
{
	int i = 0;
	double s = a[0];
	double pow = 1.0;
	
	for( i = 1; i <= n; i++ )
	{
		pow = pow * x;
		s = s + a[i] * pow;
	}
	
	return s;
    
}

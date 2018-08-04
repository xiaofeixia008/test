# include<stdio.h>

int main(void)
{
	int k = 0;
	int m = 0;
	int i;

	for ( i=1 ; i<=1000 ; ++i)
	{
		if ( i % 2 == 0 )
			k = k + i;
		else 
			m = m + i;

	}
	printf (" %d  %d \n", k , m);

	return 0 ;
} 

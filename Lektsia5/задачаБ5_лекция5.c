#include <stdio.h>

int main(int argc, char **argv)
{
	int a;
	scanf ("%d", &a);
	int summa_tsifr=0;
	while (a>0) 
	{
		summa_tsifr+=a%10;
		a/=10;
	}	
	printf ("%d", summa_tsifr);
	return 0;
}


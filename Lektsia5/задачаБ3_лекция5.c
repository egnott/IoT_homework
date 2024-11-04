#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b;
	int summa_kvadratov=0;
	scanf ("%d%d", &a, &b);
	for (int i=a; i<=b; i++)
	{
		summa_kvadratov+=i*i;
	}	
	printf ("%d", summa_kvadratov);
	return 0;
}


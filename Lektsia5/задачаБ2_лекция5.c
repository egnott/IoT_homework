#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b;
	scanf ("%d%d", &a, &b);
	for (int i=a; i<=b; i++)
	{
		printf ("%d\n", i*i);
	}	
	return 0;
}


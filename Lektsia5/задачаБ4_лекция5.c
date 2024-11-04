#include <stdio.h>

int main(int argc, char **argv)
{
	int a;
	scanf ("%d", &a);
	a=a/100;
	if ((a>=1) && (a<=9))
	{
		printf ("YES");
	}
	else
	{
		printf ("NO");
	}		
	return 0;
}


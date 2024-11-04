#include <stdio.h>

int main(int argc, char **argv)
{
	long long int a; 
	int b, c;
	scanf ("%lld", &a);
	if (a<=0) 
	{
		printf ("NO");
	}
	else
	{	
	while (a>0)
	{
		b=a%10;
		c=a/10%10;
		a/=10;
		if (b==c)
		break;
	}	
	if (b==c)
	{
		printf ("YES");
	} else
	{
		printf ("NO");
	}
	}		
	return 0;
}

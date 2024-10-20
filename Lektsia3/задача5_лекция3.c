#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c, d;
	scanf("%d", &a);
	b=a/100;
	c=a/10%10;
	d=a%10;
	printf ("%d", b*c*d);
	return 0;
}

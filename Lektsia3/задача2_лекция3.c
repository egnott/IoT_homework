#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c, d, e;
	scanf ("%d%d%d", &a,&b, &c);
	d=a+b+c;
	e=a*b*c;
	printf ("%d+%d+%d=%d\n", a, b, c, d);
	printf ("%d*%d*%d=%d", a, b, c, e);
	return 0;
}


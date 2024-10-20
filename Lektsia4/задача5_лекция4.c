#include <stdio.h>

int main(int argc, char **argv)
{
	int X1, Y1, X2, Y2, x, y;
	scanf ("%d%d%d%d", &X1, &Y1, &X2, &Y2);
	float k, b;
	k=(float)(Y2-Y1)/(X2-X1);
	b=(float)Y1-k*X1;
	printf ("%.2f %.2f", k, b);
	return 0;
}


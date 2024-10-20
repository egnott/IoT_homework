#include <stdio.h>

int main(int argc, char **argv)
{
	int a, number1, number2, number3;
	scanf ("%d", &a);
	number1=a/100;
	number2=a%100/10;
	number3=a%10;
	if ((number1>number2) && (number1>number3))
	{
		printf ("%d", number1);
	} else if ((number2>number1) && (number2>number3))
	{
		printf ("%d", number2);
	} else	
	{
		printf ("%d", number3);
	} 
	return 0;
}


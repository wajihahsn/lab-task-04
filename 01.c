#include <stdio.h>

int main ()
{
	int Num;
	printf("enter a whole number: ");
	scanf("%d", &Num);
	
	if (Num % 3 == 0)
	{
	printf("this number is a multiple of 3 ");
	}
	else if (Num % 3 != 0)
	{
	printf("this number is not a multiple of 3 ");
	}
	
	return 0;
}
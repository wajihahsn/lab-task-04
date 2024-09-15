#include <stdio.h>

int main ()
{
	char Character;
	printf("enter a character: ");
	scanf("%c", &Character);
	
	if ('a' <= Character && Character <= 'z')
	{
	printf("'%c' is a small alphabet \n", Character);
    }
	else if ('A' <= Character && Character <= 'Z')
	{
	printf("'%c' is a capital alphabet \n", Character);
	}
	else if ('0' <= Character && Character <= '9')
	{
	printf("'%c' is a digit \n", Character);
	}
	else 
	{
	printf("'%c' is a special character \n", Character);
	}
	
	return 0;
}
#include <stdio.h>

int main ()
{
	float Time;
	printf("Enter the time: ");
	scanf("%f", &Time);
	
	if (Time >= 5 && Time <= 11)
	{
		printf("Good Morning!");
	}
	else if (Time >= 12 && Time <= 18)
	{
		printf("Good Evening!");
	}
	else if (Time > 18 && Time <= 24)
	{
		printf("Good Night!");
	}
	else
	{
		printf("No greetings available between 1-5 am.");
	}
	
	return 0;
}
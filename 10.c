#include <stdio.h>

int main ()
{
	float Temp;
	printf("Enter the temperature within the range (0-40): ");
	scanf("%f", &Temp);
	
	if (Temp < 0)
	{
		printf("Freezing weather");
	}
	else if (Temp >= 0 && Temp <= 10)
	{
		printf("Very cold weather");
	}
	else if (Temp >= 11 && Temp <= 20)
	{
		printf("Cold weather");
	}
	else if (Temp >= 21 && Temp <= 30)
	{
		printf("Normal temperature");
	}
	else if (Temp >= 31 && Temp < 40)
	{
		printf("Hot weather");
	}
	else if (Temp == 40)
	{
		printf("Very hot weather");
	}
	else
	{
		printf("Temperature value out of range!");
	}
	
	return 0;
}
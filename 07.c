#include <stdio.h>

int main ()
{
	int LightIntensity;
	printf("Enter a light intensity value from (0-1000): ");
	scanf("%d", &LightIntensity);
	
	if (0 > LightIntensity || LightIntensity > 1000)
	{
		printf("Invalid! Out of range, please enter a value from 0-1000. \n ");
		return 1;
	}
	
	if (LightIntensity > 500)
	{
		printf("It is exposed under the sun. ");
	}
	else if (0 <= LightIntensity && LightIntensity <= 100)
	{
		printf("It is evening. ");
	}
	else if (100 < LightIntensity && LightIntensity <= 500)
	{
		printf("It is exposed to lighting. ");
	}
	else
	{
		printf("Invalid Light Intensity value! ");
	}
	
	return 0;
}
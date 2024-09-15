#include <stdio.h>

int main ()
{
	char UniName;
	float NTS, FSC, NTSPercent, FSCPercent;
	printf("Enter your marks of NTS: ");
	scanf("%f", &NTS);
	printf("Enter your marks of FSC: ");
	scanf("%f", &FSC);

	FSCPercent = (FSC / 1100) * 100;
	NTSPercent = (NTS / 100) * 100;
	
	if (FSCPercent > 70)
	{
		if (NTSPercent >= 70)
		{
			printf("Oxford University - IT Department");
		}
		else if (NTSPercent >= 60)
		{
			printf("Oxford University - Electronics Department");
		}
		else if (NTSPercent >= 50)
		{
			printf("Oxford University - Telecommunications Department");
		}
	}
    else if (FSCPercent >= 60 && FSCPercent <= 70) 
   {
        if (NTSPercent >= 50)
        {
            printf("MIT - IT Department");
        }
    } 
	else if (FSCPercent >= 50 && FSCPercent < 60) 
	{
        if (NTSPercent >= 50) 
		{
            printf("MIT - Chemical Department");
        }
    } 
	else if (FSCPercent > 40 && FSCPercent < 50) 
    {
        if (NTSPercent >= 50) 
		{
            printf("MIT - Computer Department");
        }
	}
	
	else
	{
		printf("No seat available on this merit.");
	}
    
	return 0;
}
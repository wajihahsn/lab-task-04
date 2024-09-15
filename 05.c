#include <stdio.h>

int main ()
{
    char Name;
	int CustomerID;
	float Unit, Charge, TotalBill;
	printf("Enter the Customer ID: ");
	scanf("%d", &CustomerID);
	
	printf("Enter the Name: ");
	scanf("%s", &Name);
	
	printf("Enter the units consumed: ");
	scanf("%f", &Unit);
	
	if (Unit <= 199)
	{
		Charge = 16.20;
		TotalBill = Unit * Charge;
	}
	else if (200 <= Unit && Unit < 300)
	{
		Charge = 20.10;
		TotalBill = Unit * Charge;
	}
	else if (300 <= Unit && Unit < 500)
	{
		Charge = 27.10;
		TotalBill = Unit * Charge;
	}
	else if (500 <= Unit)
	{
		Charge = 35.90;
		TotalBill = Unit * Charge;
	}
	
	if (TotalBill > 18000)
	{
		TotalBill += (TotalBill * 0.15);
	}
	
    printf("Net Amount Paid by the Customer: %.2f\n", TotalBill);
	
	return 0;
}
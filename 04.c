#include <stdio.h>

int main ()
{
	float Cost, Discount, DiscountCost, ActualAmount, SavedAmount;
	printf("Enter the amount you have with you: ");
	scanf("%f", &ActualAmount);
	
	printf("Enter the cost of the item you want to purchase in order to calculate discount: ");
	scanf("%f", &Cost);
	
	if (Cost < 500)
	{
		printf("Sorry, no discount available! ");
	}
	if (Cost >= 500)
	{
		Discount = 5;
		DiscountCost = (Cost) - (Cost * Discount / 100);
	}
	if (Cost >= 2000)
	{
		Discount = 10;
		DiscountCost = (Cost) - (Cost * Discount / 100);
	}
	if (Cost >= 4000)
	{
		Discount = 20;
		DiscountCost = (Cost) - (Cost * Discount / 100);
	}
	if (Cost >= 6000)
	{
		Discount = 35;
		DiscountCost = (Cost) - (Cost * Discount / 100);
	}
	
	SavedAmount = ActualAmount - DiscountCost;
	printf("The cost after discount is Rs. %f\n", DiscountCost);
	printf("Congrats! you saved Rs. %f\n ", SavedAmount);
	
	return 0;
	}
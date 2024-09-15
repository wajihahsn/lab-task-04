#include <stdio.h>

int main ()
{
	char Operator;
	float Num1, Num2, Sum, Difference, Product, Quotient;
	printf("select an operator, '+', '-', '*', '/' ");
	scanf("%c", &Operator);
	
	printf("enter two numbers to begin: ");
	scanf("%f%f", &Num1, &Num2);
	
	
	switch (Operator)
	{
		case '+':
			Sum = Num1 + Num2;
			printf("the sum is %.2f\n", Sum);
		break;
		
		case '-':
			Difference = Num1 - Num2;
			printf("the difference is %.2f\n", Difference);
		break;
		
		case '*':
			Product = Num1 * Num2;
			printf("the product is %.2f\n", Product);
		break;
		
		case '/':
			Quotient = Num1 / Num2;
			printf("the quotient is %.2f\n", Quotient);
		break;
		
		default:
			printf("invalid operator,\n enter from: '+', '-', '*', '/'", Operator);
		return 10;
	}
	return 0;
}
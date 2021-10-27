#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, c, d;
	while (1)
	{
		printf("Enter loan principle(-1 to end ):");
		scanf_s("%f", &a);
		if ( a == -1)
		{
			break;
		}
		printf("Enter interest rate :");
		scanf_s("%f", &c);
		printf("Enter term of the loan days:");
		scanf_s("%f", &b);
		d = a * b * c / 365;
		printf("The interst charg is : %f\n", d);
	}
}
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, c;
	while (1)
	{
		printf("Enter # of hour's worked (-1 to end ):");
		scanf_s("%f", &a);
		if (a == -1)
		{
			break;
		}
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &b);
		if (a > 40)
		{
			c = a * b + 5 ;
			printf("salary %f",c );
		}
		else
		{
			c = a * b ;
			printf("salary %f\n", c);
		}
		

	}

}
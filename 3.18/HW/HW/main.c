#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	
	float a,c;
	while (1)
	{

		printf("Enter sales in dolors(-1 to End):");
		scanf_s("%f", &a);
		if (a == -1)
		{
			//break;
		}
		
		c = a / 100;
		c = c * 9 + 200;
		printf("salary: %f\n", c);
	}
}
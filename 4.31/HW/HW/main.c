#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, k;
	for (i = 5; i > 0; i--)
	{
		for (k = i; k >= 0; k--)
		{
			printf(" ");
		}
		for(j = 2 * i - 1 ; j < 10 ; j ++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for (i = 4; i > 0; i--)
	{
		for (k = i; k <= 6; k++)
		{
			printf(" ");
		}
		for (j = 2 * i - 1; j > 0 ; j--)
		{
			printf("*");
		}
		printf("\n");
	}

}
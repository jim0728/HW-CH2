#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i ; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}

//------------------------------------------------------//
	printf("\n");
	for (i = 10; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}

//------------------------------------------------------//
	int k;
	printf("\n");
	for (i = 10; i > 0; i--)
	{
		for (k = 10; k > i ; k--)
		{
			printf(" ");
		}
		for (j = 0; j < i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
//-------------------------//

	printf("\n");
	for (i = 0; i < 10; i++)
	{
		for (k = 10; k > i; k--)
		{
			printf(" ");
		}
		for (j = 0; j < i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}



}
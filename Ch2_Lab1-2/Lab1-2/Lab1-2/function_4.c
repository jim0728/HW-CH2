#include<stdio.h>
#include<stdlib.h>

int Han_Xin_4()
{
	int temp;
	int temp2;
	char sign = 'X';
	char sign2 = '-';
	int i, j;
	temp = 1;
	temp2 = 8;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i > 0) && (i < 5) && (j == temp))
			{
				printf("%c", sign);
			}
			else if ((i > 0) && (i < 5) && (j == temp2))
			{
				temp++;
				printf("%c", sign);
				temp2--;
			}
			else if (i == 0)
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}
}
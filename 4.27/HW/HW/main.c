#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, k;
	for (i = 0; i <= 500; i++)
		for (j = i + 1 ; j <= 500; j++)
			for (k = j +1 ; k <= 500; k++)
				if (i*i + j * j == k * k)
					printf("%d\t%d\t%d\t \n", i , j , k );

}
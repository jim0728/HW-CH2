#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float m= 5000;
	int y;
	printf("Interest Rate: 10.0%%\n");
	printf("Year\tAmount or deposit\n");
	for (y = 1; y <= 15; y++)
	{
		m = m * 1.1;
		printf("%d\t%0.2f\n", y, m);
	}
	printf("\n");

	m = 5000;
	printf("Interest Rate: 10.5%%\n");
	printf("Year\tAmount or deposit\n");
	for ( y = 1; y <= 15; y++)
	{
		m = m * 1.105;
		printf("%d\t%.2f\n", y, m);
	}
	printf("\n");

	m = 5000;
	printf("Interest Rate: 11%%\n");
	printf("Year\tAmount or deposit\n");
	for ( y = 1; y <= 15; y++)
	{
		m = m * 1.11;
		printf("%d\t%.2f\n", y, m);
	}
	printf("\n");

	m = 5000;
	printf("Interest Rate: 11.5%%\n");
	printf("Year\tAmount or deposit\n");
	for ( y = 1; y <= 15; y++)
	{
		m = m * 1.115;
		printf("%d\t%.2f\n", y, m);
	}
	printf("\n");

	m = 5000;
	printf("interest Rate: 12%%\n");
	printf("Year\tAmount or deposit\n");
	for (int y = 1; y <= 15; y++)
	{
		m = m * 1.12;
		printf("%d\t%.2f\n", y, m);
	}
	printf("\n");
	system("pause");
	return 0;
}
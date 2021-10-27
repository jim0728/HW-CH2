#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float   a,b, c, d, e, k;

	
	while (1)
	{
		
		printf("Enter account number(-1 to end ):");
		scanf_s("%f", &a);
		if (a == -1)
		{
			break;
		}
		printf("Enter begining balance:");
		scanf_s("%f", &b);
		printf("Enter total charges:");
		scanf_s("%f", &c);
		printf("Enter total credits:");
		scanf_s("%f", &d);
		printf("Enter credit limit:");
		scanf_s("%f", &e);

		k = b + c - d;

		if (k > e)
		{
			printf("Account: %f\n", a);
			printf("cridit limit: %f\n", e);
			printf("balance: %f\n", k);
			printf("Credit Limit Exceed.\n");
		}
	}
	
	


}
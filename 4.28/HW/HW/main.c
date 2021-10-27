#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int t, h, n;
	float k, r, s, a, c , x , p;
	printf("choose employee (1_managers,2_hourly workers,3_com-mission workers,4_pieceworkers)\n");
	scanf_s("%d", &t);
	printf("\n");

	switch (t)
	{
	case(1):
		printf("managers \n");
		printf("Enter you weekly salary :");
		scanf_s("%f", &k);
		printf("Your salary is %f ", k);
		break;

	case(2):
		printf("hourly workers \n");
		printf("Enter your work hour :");
		scanf_s("%d", &h);
		printf("Enter your hourly rate :");
		scanf_s("%f", &r);
		if (h > 40)
			s = h * r + (h - 40) * r * (1.5);
		else
			s = r * h;
		printf("Your salary is %f", s);
		break;

	case(3):
		printf("commission workers \n");
		printf("Enter the sales amount for the current week :");
		scanf_s("%f", &a);
		c = 250 + a * 5.7 / 100;
		printf("Your salary is %f ", c);
		break;

	case(4):
		printf("pieceworkers \n");
		printf("Enter the number of pieces that you produced :");
		scanf_s("%d", &n);
		rintf("Enter the remuneration for each piece :");
		scanf_s("%f", &x);

		p = n * x;
		printf("Your salary is %f ", p);
		break;
	}

}
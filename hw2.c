#include<stdio.h>
int main(void)
{
	double a;
	double b = 1.609;
	printf("Please enter kilometers:");
	scanf("%lf", &a);
	printf("%.1f km is equal to %.1f miles.", a, a / b);

}
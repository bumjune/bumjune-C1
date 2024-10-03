#include <stdio.h>
int main(void) {
	int i;
	int a;
	printf("Please enter a number:");
	scanf("%d", &a);
	for (i = 2; i < a; i++)
		if (a % i != 0) {
			printf("It is a prime number.");
			break;
		}
		else if (a % i == 0) {
			printf("It is not a prime number.");
			break;
		}
}
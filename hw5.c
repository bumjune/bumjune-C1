#include<stdio.h>
void two(int n) {
	if (n < 0)
		return n * -1;
	if (n > 1) {
		two(n / 2);
	}
	printf("%d", n % 2);
}
int main(void) {
	int num;
	printf("Please enter a number:");
	scanf("%d", &num);
	two(num);
}
#include<stdio.h>
int main(void) {
	for (int a = 0; a < 5; a++) {
		for (int j = 0; j < 5 - a; j++) {
			printf(" ");
		}
		for (int k = 0; k < a * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
}
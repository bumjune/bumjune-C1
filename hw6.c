#include <stdio.h>
int main(void) {
	int i;
	int arr1[5];
	printf("Please input five integers:");
	for (i = 0; i < 5; i++) {
		scanf("%d", &arr1[i]);
	}
	printf("\n");
	printf("Odd numbers:");
	for (i = 0; i < 5; i++) {
		if (arr1[i] % 2 != 0) {
			printf("%d",arr1[i]);
			printf(" ");
		}
	}
	printf("\n");
	printf("Even numbers:");
	for (i = 0; i < 5; i++) {
		if (arr1[i] % 2 == 0) {
			printf("%d",arr1[i]);
			printf(" ");
		}
	}
}
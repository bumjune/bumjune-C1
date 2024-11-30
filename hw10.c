#include<stdio.h>
struct city {
	char name[20];
	char country[20];
	int population;
};
void ClearLineFromReadBuffer(void) {
	while (getchar() != '\n');
}
int main(void) {
	struct city arr[3];
	int i;
	printf("Input three cities:\n");
	for (i = 0; i < 3; i++) {
		printf("Name> ");
		scanf("%[^\n]", arr[i].name);
		ClearLineFromReadBuffer();
		printf("Country> ");
		scanf("%[^\n]", arr[i].country);
		ClearLineFromReadBuffer();
		printf("Population> ");
		scanf("%d", &arr[i].population);
		ClearLineFromReadBuffer();
	}
	printf("Printing the three cities:\n");
	for (i = 0; i < 3; i++) {
		printf("%d. %s in %s with a population of %d people\n", i + 1, arr[i].name, arr[i].country, arr[i].population);
	}
}
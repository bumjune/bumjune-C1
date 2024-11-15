#include<stdio.h>
#include<math.h>
int standarddeviation(int * param) {
	int i;
	double a=0,num=0,std=0;
	int sum = 0;
	for (i = 0; i < 5; i++)
		sum = sum + param[i];
	a = (double)sum / 5;  //ЦђБе
	for (i = 0; i < 5; i++)
		num += pow((param[i] - a), 2);
	num = num / 5;
	std = sqrt(num);
	printf("Standard Deviation = %.3f", std);
}
int main(void) {
	int arr[5];
	int i;
	printf("Enter 5 real numbers:");
	for (i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	standarddeviation(arr);
}
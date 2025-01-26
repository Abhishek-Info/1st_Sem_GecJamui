#include <stdio.h>
int main () {
	float num1, num2, sum;
	printf("Enter 1st Number: ");
	scanf("%f",&num1);
	printf("Enter 2nd Number: ");
	scanf("%f",&num2);
	sum = num1 / num2;
	printf("The Division of 1st and 2nd Number is %f",sum);
	return 0;
}

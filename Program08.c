#include <stdio.h>
int main () {
	int a, b;
	printf("Enter two Numbers: ");
	scanf("%d %d",&a,&b);
	if (a>b){
		printf("The Greatest Number is %d",a);
	}
	else {
		printf("The Greatest Number is %d",b);
	}
	return 0;
}

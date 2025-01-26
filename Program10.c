#include <stdio.h>
int main () {
	int a ;
	printf("Enter a Numbers: ");
	scanf("%d",&a);
	if (a%2==0){
		printf("This is a even Number.");
	}
	else {
		printf("This is a odd Number.");
	}
	return 0;
}

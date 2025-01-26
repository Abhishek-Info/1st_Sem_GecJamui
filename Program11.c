#include <stdio.h>
int main () {
	int a, b, c, x;
	printf("Enter three Numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	x = a;
	if(a<b){
		x = b;
	}
	if(b<c){
		x = c;
	}
	printf("The Greatest number is %d",x);
	return 0;
}

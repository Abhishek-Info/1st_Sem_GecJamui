#include <stdio.h>
int main () {
	int a, b, c, d, x;
	printf("Enter four Numbers: ");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	x = a;
	if(a>b){
		x = b;
	}
	if(b>c){
		x = c;
	}
	if(c>d){
		x = d;
	}
	printf("The Smallest number is %d",x);
	return 0;
}

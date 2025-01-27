#include <stdio.h>
int main () {
	float l, b, p, a ;
	printf("Enter the length of the area: ");
	scanf("%f",&l);
	printf("Enter the breadth of the area: ");
	scanf("%f",&b);
	p = 2 * (l+b);
	a = l * b ;
	printf("Perimeter: %f\n",p);
	printf("Area: %f",a);
	return 0;
}

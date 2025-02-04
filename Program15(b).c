#include <stdio.h>
int main () {
	int i ;
	i = 1;
	printf("Even Numbers: ");
	while(i<=50){
		if(i % 2 == 0)
		printf("%d, ",i);
		i++;
	}
	i = 1;
	printf("\nOdd Numbers: ");
	while(i<=50){
		if(i % 2 != 0)
		printf("%d, ",i);
		i++;
	}
	return 0;
}

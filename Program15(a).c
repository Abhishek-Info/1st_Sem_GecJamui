#include <stdio.h>
int main () {
	int i;
	printf("Even Numbers: ");
	for (i = 1; i<=50; i++) {
		if (i % 2 == 0)
		printf("%d, ",i);
	}
	printf("\nOdd Numbers: ");
	for (i = 1; i<=50; i++) {
		if (i % 2 != 0)
		printf("%d, ",i);
	}
	return 0;
}

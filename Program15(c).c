#include <stdio.h>
int main() {
    int i;
    i = 1;
    printf("Even Numbers: ");
    do {
        if (i % 2 == 0)
            printf("%d, ", i);
        i++;
    } while (i <= 50);
    
    i = 1;
    printf("\nOdd Numbers: ");
    do {
        if (i % 2 != 0)
            printf("%d, ", i);
        i++;
    } while (i <= 50);
    return 0;
}


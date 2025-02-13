#include <stdio.h>
long factorial(long n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main() { 
    long number;
    printf("Enter a number: ");
    scanf("%ld", &number);
    if (number < 0) {
        printf("Invalid Number.\n");
    } else {
        printf("Factorial of %ld is %ld\n", number, factorial(number));
    }
    return 0;
}

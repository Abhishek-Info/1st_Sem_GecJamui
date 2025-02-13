#include <stdio.h>
int function() {
    int a, b, sum;
    a = 5;
    b = 10;
    sum = a + b;
    return sum;
}
int main() {
    printf("Sum: %d", function());
    return 0;
}

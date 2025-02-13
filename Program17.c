#include <stdio.h>
int main() {
    int n = 150, a = 1, b = 1, next;
    printf("Fibonacci Series: %d %d ", a, b);
    next = a + b;
    while (next <= n) {
        printf("%d ", next);
        a = b;
        b = next;
        next = a + b;
    }
    return 0;
}

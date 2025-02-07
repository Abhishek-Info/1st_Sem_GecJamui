#include <stdio.h>
int main() {
    int n, a = 0, b = 1, next, i = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    while (i < n) {
        if (i <= 1)
            next = i;
        else {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%d ", next);
        i++;
    }

    return 0;
}

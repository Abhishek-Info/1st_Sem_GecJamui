#include <stdio.h>
int main() {
    int num, reversed = 0, digit;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    printf("Reversed Number: %d",reversed);
    return 0;
}

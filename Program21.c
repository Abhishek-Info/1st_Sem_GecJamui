#include <stdio.h>
int main() {
    float price, total = 0, discount, finalAmount;
    int i;
    for (i = 1; i <= 10; i++) {
        printf("Enter price of book %d: ", i);
        scanf("%f", &price);
        total += price;
    }
    discount = total * 20 / 100;
    finalAmount = total - discount;
    printf("Total Amount: %f\n", total);
    printf("Discount: %f\n", discount);
    printf("Amount to be Paid: %f\n", finalAmount);
    return 0;
}

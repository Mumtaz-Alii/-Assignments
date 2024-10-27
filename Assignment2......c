//discount calculater
#include <stdio.h>

int main() {
    float price, discountAmount = 0, finalPrice;

    
    printf("Enter the original price: ");
    scanf("%f", &price);

    // Determine the discount percentage based on price range
    if (price > 5000) {
        discountAmount = price * 0.20; // 20% discount
    } else if (price >= 3000 && price <= 5000) {
        discountAmount = price * 0.10; // 10% discount
    } else {
        discountAmount = 0; // No discount for price less than 3000
    }

    // Calculate the final price after discount
    finalPrice = price - discountAmount;

    // Display the results
    printf("Discount amount: %.2f\n", discountAmount);
    printf("Final price after discount: %.2f\n", finalPrice);

    return 0;
}
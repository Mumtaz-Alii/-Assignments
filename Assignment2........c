#include<stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Input the values
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Display the result
    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}
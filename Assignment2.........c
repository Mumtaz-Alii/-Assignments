//login system
#include <stdio.h>

int main() {
    int password;

    // Prompt the user to enter the password
    printf("Enter the password: ");
    scanf("%d", &password);

    // Check if the entered password is correct
    if (password == 1234) {
        printf("Login successful!\n");
    } else {
        printf("Incorrect password. Access denied.\n");
    }

    return 0;
}
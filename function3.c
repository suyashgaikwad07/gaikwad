#include <stdio.h>
#include <stdbool.h>

// Function to check even or odd
void checkEvenOdd(int num) {
    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);
}

// Function to check prime
void checkPrime(int num) {
    if (num <= 1) {
        printf("%d is NOT Prime\n", num);
        return;
    }
    bool isPrime = true;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        printf("%d is Prime\n", num);
    else
        printf("%d is NOT Prime\n", num);
}

int main() {
    int num, choice;

    while (1) {
        printf("\n=== MENU ===\n");
        printf("1. Check Even or Odd\n");
        printf("2. Check Prime\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 3) {
            printf("Exiting program.\n");
            break;
        }

        printf("Enter an integer: ");
        scanf("%d", &num);

        switch (choice) {
            case 1:
                checkEvenOdd(num);
                break;
            case 2:
                checkPrime(num);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

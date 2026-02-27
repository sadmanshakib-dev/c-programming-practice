#include <stdio.h>

int main() {
    int X, Y, sum = 0;

    // Read the two integer values X and Y
    printf("Enter two integer values (X and Y): ");
    scanf("%d %d", &X, &Y);

    // Swap X and Y if X is greater than Y
    if (X > Y) {
        int temp = X;
        X = Y;
        Y = temp;
    }

    // Iterate from X to Y, summing all odd numbers
    for (int i = X; i <= Y; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    // Print the sum of all odd values between X and Y
    printf("Sum of all odd values between %d and %d: %d\n", X, Y, sum);

    return 0;
}


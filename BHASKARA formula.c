#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C;
    double delta, root1, root2;

    // Read coefficients A, B, and C from the user
    printf("Enter coefficients A, B, and C: ");
    scanf("%lf %lf %lf", &A, &B, &C);

    // Calculate the discriminant (delta)
    delta = B * B - 4 * A * C;

    // Check if it's impossible to calculate the roots
    if (A == 0 || delta < 0) {
        printf("Impossivel calcular\n");
    } else {
        // Calculate the roots using Bhaskara's formula
        root1 = (-B + sqrt(delta)) / (2 * A);
        root2 = (-B - sqrt(delta)) / (2 * A);

        // Print the roots
        printf("Root 1: %.5lf\n", root1);
        printf("Root 2: %.5lf\n", root2);
    }

    return 0;
}


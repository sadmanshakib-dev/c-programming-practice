#include <stdio.h>

int main() {
    int code, quantity;
    double total;

    // Read the product code and quantity
    printf("Enter the product code and quantity: ");
    scanf("%d %d", &code, &quantity);

    // Calculate the total based on the code and quantity
    switch (code) {
        case 1:
            total = 4.00 * quantity;
            break;
        case 2:
            total = 4.50 * quantity;
            break;
        case 3:
            total = 5.00 * quantity;
            break;
        case 4:
            total = 2.00 * quantity;
            break;
        case 5:
            total = 1.50 * quantity;
            break;
        default:
            printf("Invalid product code\n");
            return 1; // Exit with error code
    }

    // Print the total value to pay
    printf("Total: R$ %.2lf\n", total);

    return 0; // Exit normally
}


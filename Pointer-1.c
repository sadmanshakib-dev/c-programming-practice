#include <stdio.h>

void addNumbers(int *num1, int *num2, int *num3, int *result) {
    *result = *num1 + *num2 + *num3;
}

int main() {
    int num1, num2, num3, result;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    addNumbers(&num1, &num2, &num3, &result);

    printf("Sum of the three numbers: %d\n", result);

    return 0;
}


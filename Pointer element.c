#include <stdio.h>

int main() {
    int ar[] = {10, 20, 30, 40, 50};
    int *p;
    p= ar;
    printf("Element at index 2: %d\n", *(p+2) );


    return 0;
}

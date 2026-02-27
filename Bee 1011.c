#include <stdio.h>
#include<math.h>
int main() {
    double r,pi=3.14159,a;
    scanf("%lf",&r);
    a=(4.0/3)*pi*(r*r*r);
    printf("VOLUME = %.3lf",a);
    return 0;
}

#include <stdio.h>

int main() {

    double n[100],x;
    scanf("%lf",&x);
    for(double i=0;i<100;i++)
    {
        printf("N[%.0lf] = %.4lf\n",i,x);
        x=x/2;
    }

    return 0;
}


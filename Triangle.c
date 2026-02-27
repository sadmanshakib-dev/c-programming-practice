#include <stdio.h>

int main() {

   float a,b,c,Perimetro,Area;
   scanf("%f %f %f",&a,&b,&c);
   if(a+b>c && a+c>b && b+c>a){
       Perimetro=a+b+c;
       printf("Perimetro = %.1f\n",Perimetro);
   }
   else {
       Area=((a+b)*c)/2;
       printf("Area = %.1f\n",Area);
   }
    return 0;
}

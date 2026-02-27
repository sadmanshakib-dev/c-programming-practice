#include <stdio.h>

int main() {

   float a,salary,earned;
   scanf("%f",&a);
    if(a>=0 && a<=400.00){
        salary=a+(a*15/100);
        earned=(a*15/100);
        printf("Novo salario: %.2f\n",salary);
        printf("Reajuste ganho: %.2f\n",earned);
        printf("Em percentual: 15 %\n");
    }else if(a>=400.01 && a<=800.00){
        salary=a+(a*12/100);
        earned=(a*12/100);
         printf("Novo salario: %.2f\n",salary);
        printf("Reajuste ganho: %.2f\n",earned);
        printf("Em percentual: 12 %\n");
    }else if(a>=800.01 && a<=1200.00){
      salary=a+(a*10/100);
        earned=(a*10/100);
         printf("Novo salario: %.2f\n",salary);
        printf("Reajuste ganho: %.2f\n",earned);
        printf("Em percentual: 10 %\n");
    }else if(a>=1200.01 && a<=2000.00){
        salary=a+(a*7/100);
        earned=(a*7/100);
         printf("Novo salario: %.2f\n",salary);
        printf("Reajuste ganho: %.2f\n",earned);
        printf("Em percentual: 7 %\n");
    }else if(a>2000.00){
        salary=a+(a*4/100);
        earned=(a*4/100);
         printf("Novo salario: %.2f\n",salary);
        printf("Reajuste ganho: %.2f\n",earned);
        printf("Em percentual: 4 %\n");
    }
    return 0;
}

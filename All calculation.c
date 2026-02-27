#include<stdio.h>
int main(){
  int a,b,sum,sub,mul,remainder;
  float division;
  printf("The inputs are:\n");
  scanf("%d %d",&a,&b);
sum=a+b;
  printf("SUM=%d\n",sum);
  sub=a-b;
  printf("SUB=%d\n",sub);
division=(float)a/b; //typecasting
printf("DIVISION=%f\n",division);
mul=a*b;
printf("MUL=%d\n",mul);
remainder=a%b;
printf("REMAINDER=%d\n",remainder);

return 0;
}

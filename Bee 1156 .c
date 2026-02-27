#include <stdio.h>

int main() {

  int i,j;
  float sum=0,sum1;
  for(i=1,j=1;i<=39,j<=i;i+=2,j*=2)
  {

         sum=(float)sum+i/j;


  }
  sum1=sum*2;
  printf("%.2f\n",sum1);

    return 0;
}


#include <stdio.h>

int main() {

   int n[1000],t,i;
   scanf("%d",&t);
   int j=0;
   for(i=0,j=0;i<1000;i++,j++)
   {
        while(t==j)
          {
              j=0;
          }

       printf("N[%d] = %d\n",i,j);

   }

    return 0;
}


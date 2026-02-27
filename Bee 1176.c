#include <stdio.h>

int main() {

   int t;
   scanf("%d",&t);

   long long int a[60];
   a[0]=0;
   a[1]=1;
   for(int i=2;i<61;i++)
   {
       a[i]=a[i-2]+a[i-1];
   }
int j;
   for(int i=1;i<=t;i++)
   {
       scanf("%d",&j);
       printf("Fib(%d) = %lld\n",j,a[j]);
   }



    return 0;
}


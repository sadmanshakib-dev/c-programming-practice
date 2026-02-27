#include <stdio.h>

int main() {
 int n,i,temp=20,pos,x;
 scanf("%d",&x);
 for(i=1;i<=x;i++)
 {
     scanf("%d",&n);
     if(n<temp)
     {
         temp=n;
         pos=i;
     }
 }
 printf("%d\n",pos);
    return 0;
}


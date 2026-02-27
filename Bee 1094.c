#include <stdio.h>

int main() {
 int n,j,i,sum,rabbit=0,rat=0,frog=0;
 char ch;
 double x,y,z;

 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     scanf("%d %c",&j,&ch);

     if(ch=='C')
        rabbit=rabbit+j;
     else if(ch=='R')
        rat=rat+j;
     else if(ch=='S')
        frog=frog+j;
 }

 sum=rabbit+rat+frog;
 x=(double)(100*rabbit)/sum;
 y=(double)(100*rat)/sum;
 z=(double)(100*frog)/sum;

 printf("Total: %d cobaias\n",sum);
 printf("Total de coelhos: %d\n",rabbit);
printf("Total de ratos: %d\n",rat);
printf("Total de sapos: %d\n",frog);

printf("Percentual de coelhos: %.2lf %%\n",x);
printf("Percentual de ratos: %.2lf %%\n",y);
printf("Percentual de sapos: %.2lf %%\n",z);

    return 0;
}

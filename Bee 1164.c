#include<stdio.h>
int main()
{
    int n,i,sum=0,j;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1;i<=n;i++)
    {
       for(j=1;j<=a[i];j++)
       {
            if(j==a[i])
           {
               break;
           }

           if(a[i]%j==0)
           {
               sum+=j;
           }
       }
        if(sum==a[i])
        {
            printf("%d eh perfeito\n",a[i]);//printf("%d\n",sum);
        }
        else
        {
            printf("%d nao eh perfeito\n",a[i]);
        }
        sum=0;
    }
return 0;
}


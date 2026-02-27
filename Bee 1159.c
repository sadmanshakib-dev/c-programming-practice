#include <stdio.h>

int main()
{

    int a,sum,i;

while(1)
{
    scanf("%d",&a);
    if(a%2==0)
    {
        sum=5*a+20;
    }
    if(a%2!=0)
    {
        sum=(5*(a+1))+20;
    }
    if(a==0)
    {
        break;
    }
     printf("%d\n",sum);

}

    return 0;
}



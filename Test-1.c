#include<stdio.h>
int main()
{
    int a,b;

    scanf("%d %d",&a,&b);

    if(a>b)
    {
        printf("%d is largest among %d and %d\n",a,a,b);
    }

    else
    {
        printf("%d is largest among %d and %d\n",b,a,b);
    }

}



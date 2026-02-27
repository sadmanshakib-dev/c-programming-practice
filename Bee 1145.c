#include <stdio.h>

int main()
{

    long long int x,y,row,col,a=1,b;
    scanf("%lld %lld",&x,&y);
    b=x;

    for(row=1; row<=y/x; row++)
    {
        printf("%d",a);
        for(col=a+1; col<=b; col++)
        {
            printf(" %d",col);
        }
        printf("\n");
        a=a+x;
        b=b+x;
    }



    return 0;
}


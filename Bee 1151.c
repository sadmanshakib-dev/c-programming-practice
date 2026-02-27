#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    a[0]=0;
    a[1]=1;
    printf("%d",a[0]);
     printf(" %d",a[1]);


    for(i=2;i<n;i++)
    {
        a[i]=a[0]+a[1];
        a[0]=a[1];
        a[1]=a[i];
        printf(" %d",a[i]);
    }
    printf("\n");


    return 0;
}

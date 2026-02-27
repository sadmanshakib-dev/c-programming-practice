#include<stdio.h>
int main()
{

int n,i,st,sum=0;
float avg;
scanf("%d",&n);
int a[n];
int ac=n/2;

for(i=1;i<=n;i++)
    {
    scanf("%d",&a[i]);
}

if(n%2==0)
{
    st=((n/2)+1);
    for(i=st;i<=n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum=%d\n",sum);
    avg=(float)sum/ac;
    printf("%.1f",avg);
}

else
{
    st=((n/2)+2);
    for(i=st;i<=n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d\n",sum);
    avg=(float)sum/ac;
    printf("%.1f",avg);
}


}










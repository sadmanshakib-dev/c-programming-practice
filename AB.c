#include<stdio.h>
int main()
{
    int n,i,d,e,a[4],b[4],sum1=0,sum2=0;
    float avg1,avg2;
    printf("Number of day: ");
    scanf(" %d",&n);

        scanf("%d",&d);
        for(i=1;i<=4;i++)
        {
            scanf("%d",&a[i]);
            sum1=sum1+a[i];
        }
        avg1=(float)sum1/4;


        scanf("%d",&e);
        for(i=1;i<=4;i++)
        {
            scanf("%d",&b[i]);
            sum2=sum2+b[i];
        }
         avg2=(float)sum2/4;


    if(avg1>avg2)
    {
        printf("Avg max=%.0f",avg1);
        printf("Day %d",d);
    }
    else
    {
        printf("Avg max=%.0f\n",avg2);
        printf("Day %d",e);
    }

}

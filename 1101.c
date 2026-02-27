#include<stdio.h>

int main()
{

    int M,N,i,sum=0;
    scanf("%d %d",&M,&N);
   while(1)
   {

   if(M<=0 || N<=0 || M==N)
        break;

       else if(M>N)
        {
            for(i=N; i<=M; i++)
            {
                printf("%d ",i);
                sum=sum+i;
            }
            printf("Sum=%d\n",sum);
            sum=0;
            scanf("%d %d",&M,&N);
        }
        else if(N>M)
        {
            for(i=M; i<=N; i++)
            {
                printf("%d ",i);
                sum=sum+i;
            }
            printf("Sum=%d\n",sum);
            sum=0;
            scanf("%d %d",&M,&N);
        }


   }
    return 0;
}

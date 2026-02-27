#include<stdio.h>
int main(){
int temp[7],sum=0,count=0;
float avarege;
for(int i=1;i<=7;i++){
    scanf("%d",&temp[i]);
    sum+=temp[i];
}
for(int i=1;i<=7;i++)
{
    if(temp[i]>40){
        printf("Day %d  \n ",i);
        count++;
    }

}
avarege=(float)sum/7;
printf("Avarege temp last 7 days : %.2f\n",avarege);
if(count==0)
{
    printf("No over 40\n");
}
}


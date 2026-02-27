#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char ch[35]="LIFE IS NOT A PROBLEM TO BE SOLVED";
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        printf("%c",ch[i]);
    }
    printf("\n");

}


#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    char x,y;
    scanf("%s",s);
    getchar();
    scanf("%c %c",&x,&y);

    int X=x;
    int Y=y;
    for(int i=0;i<strlen(s);i++)
    {
        int val=s[i];
        if(val==X)
        {
            s[i]=Y;
        }
    }
    printf("%s",s);

}

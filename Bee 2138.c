#include<stdio.h>
#include<string.h>
int main()
{
    char number[1000];
    int digits[10]={0};
    int max_freq=0;
    char most_frequent_digit;

    while(scanf("%s",number)!=EOF)
    {
        int len=strlen(number);
        for(int i=0;i<len;i++)
        {
            digits[number[i]-'0']++;
        }

        max_freq=0;

        for(int i=0;i<10;i++)
        {
            if(digits[i]>max_freq || (digits[i]==max_freq && i > most_frequent_digit - '0'))
            {
                max_freq = digits[i];
                most_frequent_digit = i + '0';
            }
        }

        printf("%c\n", most_frequent_digit);
        memset(digits, 0, sizeof(digits)); // Reset digits array for the next iteration
    }

    return 0;
}

#include<stdio.h>
#include<string.h>
void main()
{

    char s[50];
    int i,TA=0,TD=0,TS=0;
    printf("enter string=");
    gets(s);
    for(i=0;s[i];i++)
    {
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
        {
            TA++;
        }
        else if(s[i]>='1'&&s[i]<='9')
        {
            TD++;
        }
        else
        {
            TS++;
        }
    }
    printf("Total number of alphabets=%d\nTotal number of digits=%d\nTotal number of special characters=%d",TA,TD,TS);
}



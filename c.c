#include<stdio.h>
#include<string.h>
void main()
{

    char s[50];
    char c;
    printf("enter string=");
    gets(s);
    for(int i=0;s[i];i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
           c=s[i]-32;
           printf("%c",c);
        }
        else
        {
            c=s[i]+32;
            printf("%c",c);
        }

    }

}


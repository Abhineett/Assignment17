#include<stdio.h>
#include<string.h>
void main()
{

    char s[50];
    int l;
    printf("enter string=");
    gets(s);
    l=("%d",strlen(s));
    for(int i=l-1;i>=0;i--)
    {
       printf("%c",s[i]);
    }
}

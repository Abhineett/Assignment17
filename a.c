#include<stdio.h>
void main()
{
    char str[30];
    int l=0,i;
    printf("enter string=");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
         l++;
    }

    printf("length is %d",l);




}

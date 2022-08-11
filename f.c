#include<stdio.h>
#include<string.h>
void main()
{
    char s[50];
    int i,j,temp;
    printf("Enter string=");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("after sorting.\n");
    printf("String is\t%s",s);




}


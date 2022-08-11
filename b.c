#include<stdio.h>
void main()
{
    char str[40];
    int i,count=0;
    printf("Enter string=");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
       if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
       {
           count++;
       }
    }
    printf("Total vowels = %d",count);






}

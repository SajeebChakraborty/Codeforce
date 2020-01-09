#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000],str1[1000];
    int i,j,length;
    gets(str);
    length=strlen(str);
    for(i=0;i<length;i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            str[i]=str[i]+'a'-'A';
        }
    }
    for(i=0;i<2*length;i+=2)
    {
        str1[i]='.';
    }
    for(i=1,j=0;i<2*length;i+=2,j++)
    {
        str1[i]=str[j];
    }
    str1[2*length]='\0';

    for(i=0;i<2*length;i++)
    {
        if(str1[i]=='A'||str1[i]=='a'||str1[i]=='E'||str1[i]=='e'||str1[i]=='I'||str1[i]=='i'||str1[i]=='O'||str1[i]=='o'||str1[i]=='U'||str1[i]=='u'||str1[i]=='Y'||str1[i]=='y')
        {
            for(j=i;j<2*length-2;j++)
            {
                str1[j]=str1[j+2];
            }
            length--;
            i=-1;
        }

    }
    str1[2*length]='\0';
    puts(str1);
    return 0;
}

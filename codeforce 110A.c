#include <stdio.h>
int main()
{
    char s[20];
    scanf("%s",&s);
    int i,count=0;
    for(i=0;i<=strlen(s);i++)
    {
        if(s[i]=='4' || s[i]=='7')
        {
            count=count+1;
        }
    }
    if(count==4 || count==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
 }

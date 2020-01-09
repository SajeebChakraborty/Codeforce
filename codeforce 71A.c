#include<stdio.h>
int main()
{
    int n,i,x;
    char s[1005];
    scanf("%d",&n);
    //gets(n);
    for(i=1;i<=n;i++){


        scanf("%s",&s);
        x=strlen(s);
        if(x<=10){

            puts(s);
        }
        else{
            printf("%c%d%c\n",s[0],x-2,s[x-1]);
        }


   }












}

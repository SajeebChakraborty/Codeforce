#include<stdio.h>
int main()
{
    int x,i,count=0;
    char s[1005];
    gets(s);
    x=strlen(s);
    for(i=0;i<x;i++){

        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){

            printf("YES");
            count++;
            break;

        }

    }
    if(count==0){

        printf("NO");


    }















}

#include<stdio.h>
#include<string.h>
int main()
{
    char s[101],t[101];
    int a;
    gets(s);
    gets(t);
    strrev(s);
    a=strcmp(s,t);
    if(a==0) {

        printf("YES\n");

    }
    else{

        printf("NO\n");


    }
    return 0;
}

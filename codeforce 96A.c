#include<stdio.h>
int main()
{
    char s[100];
    int l,i,count=0;
    gets(s);
    l=strlen(s);
    for (i=0; i<l;i++){
        if(s[i]==s[i+1] && s[i]==s[i+2] && s[i]==s[i+3] && s[i]==s[i+4] && s[i]==s[i+5] && s[i]==s[i+6]){

            count++;

        }
    }
    if (count>0){
        printf ("YES\n");
    }
    else {
        printf ("NO\n");
    }
    return 0;
}

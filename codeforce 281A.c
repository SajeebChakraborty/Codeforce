#include<stdio.h>
int main()
{
    char s[10000];
    int l,i;
    gets(s);
    l=strlen(s);

    for(i=0;i<l;i++){

        if(i==0 && (s[i]>='a' && s[i]<='z')){


            s[i]=s[i]-'a'+'A';



        }
        else{

            s[i]=s[i];


        }




    }
    printf("%s\n",s);
    return 0;






}


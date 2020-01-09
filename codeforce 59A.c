#include<stdio.h>
int main()
{
    int i,x,count=0,count1=0;
    char s[1005];
    gets(s);
    x=strlen(s);
    for(i=0;i<x;i++){

        if(s[i]>='A' && s[i]<='Z'){

            count++;


        }
        else{


            count1++;


        }

    }
    if(count>count1){

        for(i=0;i<x;i++){

            if(s[i]>='a' && s[i]<='z'){

             s[i]=s[i]-32;

            }


        }

    }
    else{

        for(i=0;i<x;i++){

            if(s[i]>='A' && s[i]<='Z'){

                s[i]=s[i]+32;

            }



        }







    }
    puts(s);















}

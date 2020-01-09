#include<stdio.h>
int main()
{
    int x,i,a[10],count=0;
    char s[1005];
    gets(s);
    x=strlen(s);
    for(i=0;i<x;i++){

        if(s[i]=='H' || s[i]=='h'){

            a[0]=i;
            count++;
            break;

        }

    }
    for(i=a[0]+1;i<x;i++){

        if(s[i]=='E' || s[i]=='e'){

            a[1]=i;
            count++;
            break;

        }

    }
    for(i=a[1]+1;i<x;i++){

        if(s[i]=='L' || s[i]=='l'){

            a[2]=i;
            count++;
            break;

        }

    }
    for(i=a[2]+1;i<x;i++){

        if(s[i]=='L' || s[i]=='l'){

            a[3]=i;
            count++;
            break;

        }

    }
    for(i=a[3]+1;i<x;i++){

        if(s[i]=='O' || s[i]=='o'){

            a[4]=i;
            count++;
            break;

        }

    }
    if(count==5){


        printf("YES\n");


    }
    else{

        printf("NO\n");


    }















}

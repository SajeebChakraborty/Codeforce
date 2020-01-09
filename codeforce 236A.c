#include<stdio.h>
int main()
{
    int x,i,j,count=0,p;
    char a[100];
    gets(a);
    x=strlen(a);
    for(i=0;i<x;i++){

        for(j=i+1;j<x;j++){

            if(a[i]==a[j]){

                a[i]=0;
                count++;

            }


        }

    }
    p=x-count;
    if(p%2==0){

        printf("CHAT WITH HER!");


    }
    else{

        printf("IGNORE HIM!");

    }















}

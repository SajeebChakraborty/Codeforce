#include<stdio.h>
int main()
{
    int a[10][10];
    int x,y,c,d,j,i;
    for(i=1;i<=5;i++){

        for(j=1;j<=5;j++){

            scanf("%d",&a[i][j]);
            if(a[i][j]==1){
                x=i;
                y=j;

            }






        }
        }


        c=x-3;
        d=y-3;
        if(c<0){
            c=-c;
        }
        if(d<0){
            d=-d;
        }
        printf("%d",c+d);













}

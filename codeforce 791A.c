#include<stdio.h>
int main()
{
    int a,b,i,sum1=0,sum2=0,c,d;
    scanf("%d%d",&a,&b);
    for(i=1;i<=10;i++){

        a=a*3*i;
        b=b*2*i;
        //printf("%d %d",c,d);
        if(a>b){

            printf("%d\n",i);
            break;


        }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int a,b,c,i,d[1005],l=0;
    scanf("%d%d%d",&a,&b,&c);
    d[0]=a+b*c;
    d[1]=a*(b+c);
    d[2]=a*b*c;
    d[3]=(a+b)*c;
    d[4]=a+b+c;
    for(i=0;i<5;i++){
        //printf("%d",d[i]);
        if(d[i]>l){

            l=d[i];


        }



    }
    printf("%d\n",l);
    return 0;







}

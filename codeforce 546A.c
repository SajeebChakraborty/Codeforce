#include<stdio.h>
int main()
{
    int k,n,w,sum=0,i,p;
    scanf("%d%d%d",&k,&n,&w);
    for(i=1;i<=w;i++){
    sum=sum+i*k;}
    p=sum-n;
    if(p>0){
        printf("%d\n",p);
    }
    else if(p<=0){
        printf("0\n");
    }
    return 0;


}

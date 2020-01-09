#include<stdio.h>
int main()
{
    int n,k,i,p,sum=0,c=0;
    scanf("%d%d",&n,&k);
    int a[n+5];
    for(i=0;i<n;i++){


        scanf("%d",&a[i]);
        if(i==k-1){

            p=a[i];

        }
        if(a[i]==0){
            c++;
        }



    }
    for(i=0;i<n;i++){

        if(a[i]>=p && a[i]!=0){

            sum++;
        }



    }
    if(c==n){
        printf("0");
    }
    else{
        printf("%d",sum);
    }











}

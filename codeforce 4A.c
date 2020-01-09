#include<stdio.h>
int main()
{
    int w,a[100],b,i,count=0;
    scanf("%d",&w);
    for(i=2;i<w;i++){

        b=w%i;
        if(b==0){

            a[i]=i;


        }

    }
    for(i=2;i<w;i++){
    for(i=2;i<w;i++){

        if(a[i]+a[i]==w){

            count=count+1;
        }




    }
    }
    if(count>=1){
        printf("YES\n");
    }
    else{
    printf("NO\n");}
    return 0;



}

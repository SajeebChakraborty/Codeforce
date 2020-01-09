#include<stdio.h>
int main(){

    int n,i,j,k,p=0,a[1005],count=0;
    scanf("%d",&n);
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%444==0 || n%447==0 || n%477==0 || n%777==0 || n%774==0 || n%744==0 || n%747==0 || n%474==0 || n%77==0 || n%44==0){

        printf("YES");
    }
    else{
        printf("NO");
    }
    /*for(i=4;i<=7;i=i+3){

        for(j=4;j<=7;j=j+3){

            for(k=4;k<=7;k=k+3){
                printf("%d    %d    %d\n",i,j,k);
                a[p]=i*100+j*10+k;

                count++;
            }




        }



    }
    printf("%d",count);
    for(p=0;p<count;p++){

        if(n/a[i] || n/4 || n/7 || n/47 || n/74 || n/44 || n/77){

            printf("YES");
            break;

        }
        else{
            printf("NO");
            break;
        }



    }*/




}

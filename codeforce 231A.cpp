#include<stdio.h>
int main()
{
    int n,x,y,z,sum[1005],c=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){

      scanf("%d%d%d",&x,&y,&z);
      sum[i]=x+y+z;

    }
    for(i=0;i<n;i++){

        if(sum[i]>=2){

            c++;

        }



    }
    printf("%d",c);






}

#include<stdio.h>
int main()
{
    int n,a,b,c=0,d=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        c=c+(b-a);
        if(d<c) {
        d=c;
        }
    }
    printf("%d\n",d);
    return 0;

}

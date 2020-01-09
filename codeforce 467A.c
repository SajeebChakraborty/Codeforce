#include <stdio.h>
int main()
{
    int n,a,b,c,count=0;
    scanf("%d",&n);
    if(1<=n<=100)
    for(c=1;c<=n;c++)
    {
        scanf("%d %d",&a,&b);
        0<=a<=b<=100;
        if(b>a && b-a>=2)
            count=count+1;
    }
    printf("%d\n",count);
    return 0;
}

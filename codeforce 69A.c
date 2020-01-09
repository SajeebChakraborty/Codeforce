#include <stdio.h>
int main()
{
    int n,x,y,z,d,e=0,f=0,g=0;
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
        scanf("%d%d%d",&y,&z,&d);
        y>=-100;
        z<=100;
        d<=100;
        e=e+y;
        f=f+z;
        g=g+z;
    }
    if(e==0 && f==0 && g==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

}

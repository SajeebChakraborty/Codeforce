#include<stdio.h>
#include<math.h>
main(void)
{
    long long int a[100001],n,hi=0,s,i,k=0;
    s=0;

    scanf("%I64d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);
        if(s<=a[i])
        {
            s=a[i];
            k++;
        }
        else
        {
             k=1;
             s=a[i];
        }
         if(hi<k)
        {
            hi=k;


        }

    }
    if(hi==0)
        {
           hi=k;

        }
    printf("%I64d\n",hi);
    return 0;
}

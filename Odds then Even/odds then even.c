#include <stdio.h>

int main()

{
    long long int n,k;
    long long int i;

    scanf("%lld%lld",&n,&k);

    if(n==1&&k==1)
    {
        printf("%lld",n);
    }
    else if(n%2==0)
    {
        if(k<=n/2)
        {
            i=2*k-1;
            printf("%lld",i);
        }
        else
        {
            i=2*(k-n/2);
            printf("%lld",i);
        }
    }
    else 
    {
        if(k<=(n/2+1))
        {
            i=2*k-1;
            printf("%lld",i);
        }
        else
        {
            i=2*(k-(n/2+1));
            printf("%lld",i);
        }
    }
    return 0;
}

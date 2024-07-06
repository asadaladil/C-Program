#include <stdio.h>
int main()
{
    long long int r,i,f=1;
    scanf("%lld",&r);
    long long int a,b,c,j;


    for(i=1; i<=r; i++)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        if(c==1)
        {
            printf("YES\n");
            continue;
        }
        while(a%2==0)
        {
            a=a/2;
            f=f*2;
        }
        while(b%2==0)
        {
            b=b/2;
            f=f*2;
        }
        if(f>=c)
        {
            printf("Yes\n");
        }
        else
        {
            printf("NO\n");
        }
        f=1;
    }

    return 0;
}

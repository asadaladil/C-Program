#include <stdio.h>
#include<math.h>
int main()
{
    long long int a,i;

    scanf("%lld",&a);
    printf("The factors of %lld are:\n",a);
    if(a>100000000)
    for(i=1;i<=sqrt(a)+1;i++)
    {
        if(a%i==0)
        {
            printf("%lld\n",i);
        }
        if(i==sqrt(a)+1)
        {
            printf("%lld",a);
        }
    }
    else
    {
        for(i=1;i<=a;i++)
        {
            if(a%i==0)
            {
                printf("%lld\n",i);
            }
        }
    }
    return 0;
}
#include <stdio.h>
#include <math.h>

int main()

{
    long long int a;
    scanf("%lld",&a);

    int i,b,sum=0;
    
    for(i=0;i>=0;i++)
    {
        if(a/(pow(10,i))>=1)
        {
            b=pow(10,i);
            sum=sum+(a/b)%10;
        }
        else
        {
            printf("%d\n",sum);
            break;
        }
    }
    return 0;
}

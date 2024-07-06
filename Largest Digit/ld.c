#include <stdio.h>
#include <math.h>
int main()
{
    long long int n,i,b=0,a,c;
    scanf("%lld",&n);
    int R[1000];
    for(i=0;i<1000;i++)
    {
        R[i]=0;
    }

    for(i=0;i>=0;i++)
    {
        if((n/pow(10,i))>=1)
        {
            a=n/pow(10,i);
            c=a%10;
            R[i]=c;
            b++;
        }
        else
        {
            break;
        }
    }
    int max;
    int min;
    max=R[0];

    for(i=1;i<b;i++)
    {
        if(max<R[i])
        {
            max=R[i];
        }
    }
    printf("Largest  Digit of %lld is %d.\n",n,max);
    min=R[0];
    for(i=1;i<b;i++)
    {
        if(min>R[i])
        {
            min=R[i];
        }
    }
    printf("Smallest Digit of %lld is %d.\n",n,min);
    return 0;
}
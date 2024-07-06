#include <stdio.h>
#include <math.h>

int main()

{
    long long int a;
    int i;
    scanf("%lld",&a);

    for(i=1;i>=1;)
    {
       if(a/(pow(10,i))>=1)
       {
        i++;
       }
       else
       {
        printf("%d digits",i);
        break;
       }
    }
    return 0;
}
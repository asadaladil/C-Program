#include <stdio.h>

int main()

{
    int a,b,c,d,e,i;

    scanf("%d%d",&a,&b);
    d=a;
    e=b;

    if(a>b)
    {
        for(i=1;i>=1;i++)
        {
            if(b!=0)
            {
                c=a%b;
                a=b;
                b=c;
            }
            else
            {
                break;
            }
        }
        printf("The GCD of %d and %d is %d\n",d,e,a);
        printf("The LCM of %d and %d is %d",d,e,(d*e)/a);
    }
    else if(a<b)
    {
         for(i=1;i>=1;i++)
        {
            if(a!=0)
            {
                c=b%a;
                b=a;
                a=c;
            }
            else
            {
                break;
            }
        }
        printf("The GCD of %d and %d is %d\n",d,e,b);  
        printf("The LCM of %d and %d is %d",d,e,(d*e)/b);
    }
    return 0;
}
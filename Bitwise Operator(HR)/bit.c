#include <stdio.h>
int main()
{
    int a,b,m=0,n=0,p=0,x=0,y=0;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a;i++)
    {
        for(int j=i+1;j<=a;j++)
        {
            if((i&j)<b&&(i&j)>m)
            {
                m=i&j;
            }
            if((i|j)<b&&(i|j)>n)
            {
                n=i|j;
            }
            if((i^j)<b&&(i^j)>p)
            {
                p=i^j;
            }
        }
    }
    
    printf("%lld\n%lld\n%lld\n",m,n,p);
    return 0;
}
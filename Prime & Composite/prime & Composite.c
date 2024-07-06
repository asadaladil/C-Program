#include <stdio.h>

int main()

{
    int a,i,f;

    scanf("%d",&a);
    if(a==2)
    {
        printf("Prime");
    }
    f=0;
    for(i=2;i<=(a-1);i++)
    {
        if(a%i==0)
        {
            f=1;
            printf("Composite");
            break;
        }
        
    }
    if(f==0)
    {
        printf("Prime");
    }
    return 0;
}
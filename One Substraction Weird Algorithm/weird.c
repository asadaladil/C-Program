#include <stdio.h>

int main()

{
    int a;
    scanf("%d",&a);

    int i;
    printf("%d ",a);

    for(i=1;i>=1;i++)
    {
        if(a==1)
        {
            break;
        }
        else if(a%2==0)
        {
            a=a/2;
        }
        else
        {
            a=a-1;
        }
        printf("%d ",a);
    }
    return 0;
}
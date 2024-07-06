#include <stdio.h>

int main()
{
    int i,n,a;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(a=0;a<n;a++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
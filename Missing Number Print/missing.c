#include <stdio.h>

int main()

{
    int a,n,i,R[200001];

    printf("Enter your value: ");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        R[i]=0;
    }

    for(i=1;i<n;i++)
    {
        scanf("%d",&a);
        R[a]=1;
    }

    for(i=1;i<=n;i++)
    {
        if(R[i]==0)
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
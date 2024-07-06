#include <stdio.h>

int main()

{
    int n,i,O=0,E=0,R[n+1];

    printf("Enter your value: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&R[i]);
    }

    for(i=0;i<n;i++)
    {
        if(R[i]%2==0)
        {
            E++;
        }
        else
        {
            O++;
        }
    }

    printf("Even number = %d\nOdd number = %d",E,O);

    return 0;
}
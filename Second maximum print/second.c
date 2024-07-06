#include <stdio.h>

int main()

{
    int i,n,R[n+1];

    printf("Enter your value: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&R[i]);
    }

    int max, max2;
    max=R[0];
    max2=R[1];

    for(i=1;i<n;i++)
    {
        if(max<R[i])
        {
            max=R[i];
        }
    }
    printf("First Maximum value is %d\n",max);
    
    for(i=0;i<n;i++)
    {
        if(max==R[i])
        {
            continue;
        }
        else if(max>max2 && max2<R[i])
        {
            max2=R[i];
        }    
    }

    printf("Second Maximum value is %d\n",max2);

    return 0;

}
#include <stdio.h>
int main()

{
    int n,i,b;
    scanf("%d",&n);
    int R[n],m=0,A[50];
    for(i=0; i<50; i++)
    {
        A[i]=0;
    }

    for(i=0; i<n; i++)
    {
        scanf("%d",&R[i]);
    }
    int y;
    for(i=0;i<n;i++)
    {
        if(R[i]%2==0)
        {
            y=R[i];
            break;
        }
    }
    for(i=1; i<n; i++)
    {
        if(y<R[i]&&R[i]%2==0)
        {
            y=R[i];
        }
    }

    for(i=0; i<n; i++)
    {
        for(b=i+1; b<n; b++)
        {
            if((R[i]+R[b])%2==0)
            {
                A[m]=R[i]+R[b];
                m++;
            }
        }
    }
    int maxx=A[0];
    for(i=1; i<50; i++)
    {
        if(maxx<A[i])
        {
            maxx=A[i];
        }
    }
    if(maxx<y&&y%2==0)
    {
        printf("%d",y);
    }
    else if(n==2&&(R[0]+R[1])%2==0)
    {
        printf("%d",R[0]+R[1]);
    }
    else
    {
        printf("%d",maxx);
    }


    return 0;
}

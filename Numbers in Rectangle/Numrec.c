#include <stdio.h>
int main()
{
    int a,i,j,s,b,m;
    scanf("%d",&a);
    s=2*a-1;
    int R[s+1][s+1];
    m=2*a-1;
    b=1;
    
    while(a!=0)
    {
        for(i=b;i<=s;i++)
        {
            for(j=b;j<=s;j++)
            {
                if(i==b||j==b||i==s||j==s)
                {
                    R[i][j]=a;
                }
            }
        }
        a--;b++;s--;
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("%d ",R[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}
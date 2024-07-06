#include <stdio.h>
int main()
{
    int r,c,a=0,b=0,d=0;
    scanf("%d%d",&r,&c);
    int R[r][c],i,j,m=r;

    if(r==c&&r>1&&c>1)
    {
        for(i=1;i<=r;i++)
        {
            for(j=1;j<=c;j++)
            {
                scanf("%d",&R[i][j]);
            }
        }
        printf("\n");
        for(i=1;i<=r;i++)
        {
            if(R[i][i]>0)
            {
                a++;
            }
            if(R[i][m]>0)
            {
                d++;
            }
            for(j=1;j<=c;j++)
            {
                if(R[i][j]==0)
                {
                    b++;
                }
                
            }
            m--;
        }
        printf("\n");
        if(r*c==b)
        {
            printf("Null Matrix\n");
        }
        else if(r*c-a==b)
        {
            printf("Diagonal\n");
        }
        else if(r*c-d==b)
        {
            printf("Secondery Diagonal\n");
        }
        else
        {
            printf("Not Diagonal\n");
        }
    }
    else
    {
        printf("It is not a square matrix\n");
    }
    return 0;
}
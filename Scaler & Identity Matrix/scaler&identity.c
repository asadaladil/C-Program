#include <stdio.h>
int main()
{
    int r,c,a=0,b=0;
    scanf("%d%d",&r,&c);
    int R[r][c],i,j,m=0;

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
            if(R[i][i]==1)
            {
                a++;
            }
            if(R[i][i]==R[r][c])
            {
                m++;
            }
            for(j=1;j<=c;j++)
            {
                if(R[i][j]==0)
                {
                    b++;
                }

            }
        }
        printf("\n");
        if(r*c==b)
        {
            printf("Null Matrix\n");
        }
        else if(r*c-a==b)
        {
            printf("Identity Matrix\n");
        }
        else if(r*c-m==b)
        {
            printf("Scaler Matrix\n");
        }
        else
        {
            printf("Not Identity & Not Scaler Matrix\n");
        }
    }
    else
    {
        printf("It is not a square matrix\n");
    }
    return 0;
}

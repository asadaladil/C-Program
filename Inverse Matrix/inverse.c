#include<stdio.h>
int sohogunok(int A[4][4],int i,int j)
{
    if(i==1&&j==1)
    {
        return A[2][2]*A[3][3]-A[3][2]*A[2][3];
    }
    else if(i==1&&j==2)
    {
        return -(A[2][1]*A[3][3]-A[3][1]*A[2][3]);
    }
    else if(i==1&&j==3)
    {
        return A[2][1]*A[3][2]-A[3][1]*A[2][2];
    }
    else if(i==2&&j==1)
    {
        return -(A[1][2]*A[3][3]-A[3][1]*A[1][3]);
    }
    else if(i==2&&j==2)
    {
        return A[1][1]*A[3][3]-A[3][1]*A[1][3];
    }
    else if(i==2&&j==3)
    {
        return -(A[1][1]*A[3][2]-A[3][1]*A[1][2]);
    }
    else if(i==3&&j==1)
    {
        return A[1][2]*A[2][3]-A[2][2]*A[1][3];
    }
    else if(i==3&&j==2)
    {
        return -(A[1][1]*A[2][3]-A[2][1]*A[1][3]);
    }
    else if(i==3&&j==3)
    {
        return A[1][1]*A[2][2]-A[2][1]*A[1][2];
    }
}
int determine(int A[4][4])
{
    int a;
    a=A[1][1]*(A[2][2]*A[3][3]-A[3][2]*A[2][3])-A[1][2]*((A[2][1]*A[3][3]-A[3][1]*A[2][3]))+A[1][3]*(A[2][1]*A[3][2]-A[3][1]*A[2][2]);
    return a;
}
int main()
{
    int r,c;
    printf("Only Enter 2/2 or 3/3 Matrix\n");
    scanf("%d%d",&r,&c);
    int R[r+1][c+1];
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            scanf("%d",&R[i][j]);
        }
    }
    if(r==2&&c==2)
    {
        int a;
        a=R[1][1]*R[2][2]-R[2][1]*R[1][2];
        if(a!=0)
        {
            int m;
            m=R[1][1];
            R[1][1]=R[2][2];
            R[2][2]=m;
            R[1][2]*=(-1);
            R[2][1]*=(-1);
            printf("\n");
            for(int i=1;i<=r;i++)
            {        
                for(int j=1;j<=c;j++)
                {
                    printf("%d/%d  ",R[i][j],a);
                }
                printf("\n");
            }
        }
        else
        {
            printf("\nCalculation Error-Determiner ZERO");
        }
    }
    else if(r==3&&c==3)
    {
        if(determine(R)!=0)
        {
            int B[r+1][c+1];
            for(int i=1;i<=r;i++)
            {
                for(int j=1;j<=c;j++)
                {
                    B[i][j]=sohogunok(R,i,j);
                }
            }
            for(int i=1;i<=r;i++)
            {
                for(int j=i+1;j<=c;j++)
                {
                    int d;
                    d=B[i][j];
                    B[i][j]=B[j][i];
                    B[j][i]=d;
                }
            }
            for(int i=1;i<=r;i++)
            {
                for(int j=1;j<=c;j++)
                {
                    printf("%d/%d  ",B[i][j],determine(R));
                }
                printf("\n");
            }
        }
        else
        {
            printf("\nCalculation Error-Determiner ZERO");
        }
    }
    return 0;
}
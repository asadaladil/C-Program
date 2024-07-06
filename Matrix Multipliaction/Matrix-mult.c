#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    printf("\n");
    int A[a+1][b+1];

    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
    int c,d;
    scanf("%d%d",&c,&d);
    printf("\n");
    int B[c+1][d+1];int R[a+1][d+1];
    if(b==c)
    {
       for(i=1;i<=c;i++)
       {
            for(j=1;j<=d;j++)
            {
                scanf("%d",&B[i][j]);
                R[i][j]=0;
            }
       }
       for(i=1;i<=a;i++)
       {
        for(j=1;j<=d;j++)
        {
            for(int m=1;m<=b;m++)  //in this case we have to use the similar value of matrix-1 & matrix-2
            {
                R[i][j]=R[i][j]+A[i][m]*B[m][j];
            }
        }
       }
       printf("\n");
       for(i=1;i<=a;i++)
       {
        for(j=1;j<=d;j++)
        {
            printf("%d ",R[i][j]);
        }
        printf("\n");
       }
    }
    else
    {
        printf("Matrix Multiplication error");
    }
    return 0;
}
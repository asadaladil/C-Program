#include <stdio.h>
int main()
{
    int r,c,i,j,a;
    scanf("%d%d",&r,&c);
    int R[r][c];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&R[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",R[j][i]);
        }
        printf("\n");
    }
    return 0;
}

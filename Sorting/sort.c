#include<stdio.h>
int m;
void sorting(int R[])
{
    for(int i=1;i<=m;i++)
    {
        for(int j=i+1;j<=m;j++)
        {
            if(R[i]>R[j])
            {
                int s=R[i];
                R[i]=R[j];
                R[j]=s;
            }
        }
    }
    for(int i=1;i<=m;i++)
    {
        printf("%d ",R[i]);
    }
}
int main()
{
    scanf("%d",&m);
    int R[m+1];
    for(int i=1;i<=m;i++)
    scanf("%d",&R[i]);
    sorting(R);
    return 0;
}

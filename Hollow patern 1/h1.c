#include <stdio.h>

int main()

{
    int r,c,n,i,s;
    printf("Enter your row: ");
    scanf("%d",&r);
    printf("Enter your column: ");
    scanf("%d",&c);

    for(i=1;i<=r;i++)
    {
        for(s=1;s<=c;s++)
        {
            if(i==1&&s<=c||s==1&&s<=c||s==c&&s<=c)
            {
                printf(" # ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    for(s=1;s<=c;s++)
    {
        printf(" # ");
    }
    printf("\n");

    return 0;
}
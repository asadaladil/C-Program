//সমদ্বিবাহু সমকোণী ত্রিভুজ
#include <stdio.h>
int main()
{
    int n,i,a;
    printf("Enter your value:\n");
    scanf("%d",&n);
    for(i=1;i<=(n-1);i++)
    {
        for(a=1;a<=i;a++)
        {
            if(a==1||a==i)
            {
                printf("# ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        printf("# ");
    }

    return 0;
}
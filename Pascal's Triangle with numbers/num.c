#include <stdio.h>

int main()

{
   int n,r,s,c,p;
   printf("Enter your row: ");

   scanf("%d",&r);

   for(n=0;n<r;n++)
   {
    for(s=1;s<=(r-n);s++)
    {
        printf(" ");
    }
    for(c=0;c<=n;c++)
    {
        if(n==0||c==0)
        {
            p=1;
            printf("%d ",p);
        }
        else
        {
            p=p*(n-c+1)/c;
            printf("%d ",p);
        }
    }
    printf("\n");
   }
   return 0;
}
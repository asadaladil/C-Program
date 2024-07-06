#include <stdio.h>

int main()

{
   int n,r,s,c;
   printf("Enter your row: ");

   scanf("%d",&r);

   for(n=1;n<=r;n++)
   {
    for(s=1;s<=(r-n);s++)
    {
        printf(" ");
    }
    for(c=1;c<=n;c++)
    {
        printf("* ");
    }
    printf("\n");
   }
   return 0;
}
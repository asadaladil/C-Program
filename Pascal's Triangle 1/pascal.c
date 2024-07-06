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
    for(c=1;c<=(2*n-1);c++)
    {
        printf("*");
    }
    printf("\n");
   }
   return 0;
}
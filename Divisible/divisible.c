#include <stdio.h>
int main()

{
    int a,b;
    printf("Enter the first Number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);

    if(a%b==0)
    {
        printf("\nThe first number is divisible by the second number.");
    }
    else if(b%a==0)
    {
        printf("\nThe second number is divisible by the first number.");
    }
    else
    {
        printf("\nNone of them divisible by the other.");
    }
    return 0;
}
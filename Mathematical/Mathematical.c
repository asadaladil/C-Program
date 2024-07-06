#include <stdio.h>

int main()

{
    int a,b;
    printf("Input your value of a & b\n");

    scanf("%d%d",&a,&b);

    printf("Summation is %d\nSubstraction is %d\nMultiplication is %d\nModulus is %d\n",a+b,a-b,a*b,a%b);

    return 0;
}
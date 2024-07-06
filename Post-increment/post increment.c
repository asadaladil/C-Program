#include <stdio.h>

int main()

{
    int a,b;

    printf("Input your value:\n");

    scanf("%d",&a);

    b=a++; // first of all, primary value of a will store in b then a will increase +1 and print it...

    printf("The post increment result is %d %d",a,b);

    return 0;
}
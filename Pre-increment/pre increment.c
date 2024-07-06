#include <stdio.h>

int main()

{
    int a,b;

    printf("Input your value:\n");

    scanf("%d",&a);

    b=++a;

    printf("The pre increment result is %d %d",a,b);

    return 0;
}
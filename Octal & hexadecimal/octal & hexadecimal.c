#include <stdio.h>

int main()

{
    int a;

    printf("Input your value:\n");

    scanf("%d",&a);
    int b;
    b=a;

    printf("The decimal value of %d is %d\n",a,b);

    printf("The octal value of %d is %o\n",a,b);
    
    printf("The hexadecimal value of %d is %x\n",a,b);

    return 0;
}
#include <stdio.h>

int main()

{
    int a,b;
    
    printf("Input your 2 values:\n");

    scanf("%d%d",&a,&b);

    printf("Bitwise X-OR operator result is %d",a^b);

    return 0;
}
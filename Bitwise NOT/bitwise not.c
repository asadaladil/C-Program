#include <stdio.h>

int main()

{
    int a;
    
    printf("Input your value:\n");

    scanf("%d",&a);

    printf("Bitwise NOT operator result is %d",~a+1);

    return 0;
}
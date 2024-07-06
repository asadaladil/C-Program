#include <stdio.h>
int g;
void print1(int a)
{
    for(int j=1; j<=(g-a); j++)
    {
        printf(" ");
    }
    for(int j=1; j<=(2*a-1); j++)
    {
        printf("^");
    }
    printf("\n");

}
void print2(int a)
{
    for(int j=1; j<=(g-a); j++)
    {
        printf(" ");
    }
    for(int j=1; j<=(2*a-1); j++)
    {
        printf("*");
    }
    printf("\n");

}
int main()
{
    int a;
    scanf("%d",&a);
    g=a;
    for(int i=1; i<=a; i++)
    {
        if(i%2==0)
        {
            print2(i);
        }
        else
        {
            print1(i);
        }
    }
    return 0;
}

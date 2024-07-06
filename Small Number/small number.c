#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Input your 3 numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b&&a<c)
    {
        printf("%d is the smallest number",a);
    }
    else if(b<a&&b<c)
    {
        printf("%d is the smallest number",b);
    }
    else if(a==b&&b==c&&a==c)
    {
        printf("They are equal");
    }

    else if(c<a&&c<b)
    {
        printf("%d is the smallest number",c);
    }
    else if(a==b||b==c||c==a)
    {
        if(a==b)
        {
            printf("smallest Two Values are same.It is %d",a);
        }
        else if(b==c)
        {
            printf("smallest Two Values are same.It is %d",b);
        }
        else
        {
            printf("smallest Two Values are same.It is %d",c);
        }
    }
    return 0;
}

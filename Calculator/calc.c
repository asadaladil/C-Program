#include <stdio.h>

int main()

{
    int a,b;
    char c,d;

    int i;

    for(i=1;i>0;i++)
    {
        printf("%d.Enter 'c' for continue or enter 'e' for exit: ",i);   
        scanf("%c",&c);

        //if(c!='c' || c!='e')
        //{
        //    printf("Invalid Input.Please maintain the objectives--->\n\n");
        //}

        if(c=='e')
        {
            break;
        }
        else if(c=='c')
        {
            scanf("%d%c%d",&a,&d,&b);
            if(d=='+')
            {
                printf("%d%c%d=%d\n",a,d,b,a+b);
            }
            else if(d=='-')
            {
                printf("%d%c%d=%d\n",a,d,b,a-b);
            }
            else if(d=='*')
            {
                printf("%d%c%d=%d\n",a,d,b,a*b);
            }
            else if(d=='%')
            {
                printf("%d%c%d=%d\n",a,d,b,a%b);
            }
            else if(d=='/')
            {
                printf("%d%c%d=%d\n",a,d,b,a/b);
            }
        }
    }
   return 0;
}
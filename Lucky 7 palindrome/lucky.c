#include <stdio.h>
#include <string.h>
int main()
{

    int a;
    scanf("%d",&a);

    for(int j=1; j<=a; j++)
    {
        char w[1000];
        scanf("%s",w);
        int l=strlen(w);
        char v[1000];
        int m=0,n=0;
        for(int i=(l-1); i>=0; i--)
        {
            v[m]=w[i];
            m++;
        }
        for(int i=0; i<l; i++)
        {
            if(w[i]==v[i])
            {
                n++;
            }
            else
            {
                printf("Case #1: Not Palindrome\n");
                break;
            }
        }
        if(n==l)
        {
            if(l>7)
            {
                printf("Case #2: %c%d%c\n",w[0],l-2,w[l-1]);
            }
            else
            {
                printf("Case #3: ");
                puts(w);

            }
        }
    }
    return 0;
}

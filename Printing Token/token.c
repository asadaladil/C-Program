#include<stdio.h>
#include <string.h>
int main()
{
    char R[1000];
    fgets(R,sizeof(R),stdin);

    int len=strlen(R)-1;
    for(int i=0;i<len;i++)
    {
        if(R[i]==' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c",R[i]);
        }

    }

    return 0;
}

#include <stdio.h>

int main()

{
    int a,b,c,d;
    printf("Input first 2 numbers:\n");

    scanf("%d%d",&a,&b);
    printf("Input last 2 numbers:\n");
    scanf("%d%d",&c,&d);

    if(a==b||c==d)
    {
        printf("MATCH DRAW");
    }
    
    else
    {
        if(a>b)
      {
        printf("First round winner: %d\n",a);
      }
        else
      {
        printf("First round winner: %d\n",b);
      }

       if(c>d)
      {
        printf("Second round winner: %d\n",c);
      }
       else
      {
        printf("Second round winner: %d\n",d);
      }

       if(a>d&&b<c||a>c&&b<d)
      {
        
        printf("FAIR Play\n"); 
      }
       else if(b>d&&c>a||b>c&&a<d)
      {
        printf("FAIR Play\n");
      }
      
    
      else
      {
        printf("UNFAIR Play\n");
      }
    }

    
    
    return 0;
}
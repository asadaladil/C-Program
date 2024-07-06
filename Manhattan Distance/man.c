#include<stdio.h>
#include<math.h>
struct Point
{
    int x;
    int y;
};
int manhattan(struct Point a,struct Point b)
{
    int ans;
    ans=abs(a.x-b.x)+abs(a.y-b.y);
    return ans;
}
int main()
{
    struct Point p1,p2;
    scanf("(%d,%d)\n",&p1.x,&p1.y);
    scanf("(%d,%d)",&p2.x,&p2.y);
    printf("\nManhattan distance is %d",manhattan(p1,p2));
    return 0;
}
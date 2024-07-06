#include<stdio.h>
struct Point
{
    double x;
    double y;
};
struct Triangle
{
    struct Point A;
    struct Point B;
    struct Point C;
};
struct Point centroied(struct Triangle t)
{
    struct Point ans;
    ans.x=(t.A.x+t.B.x+t.C.x)/3;
    ans.y=(t.A.y+t.B.y+t.C.y)/3;
    return ans;
};

int main()
{
    struct Point T[3];
    for(int i=0;i<3;i++)
    {
        scanf("(%lf,%lf)",&T[i].x,&T[i].y);
    }
    struct Triangle t={T[0],T[1],T[2]}; 
    struct Point U;
    U=centroied(t);
    printf("The Centroied of that triangle is (%.1lf,%.1lf)",U.x,U.y);
    return 0;
}
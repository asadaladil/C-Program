#include<stdio.h>
struct Point
{
    int real;
    int img;
};
struct Point add_comp(struct Point a,struct Point b)
{
    struct Point ans;
    ans.real=a.real+b.real;
    ans.img=a.img+b.img;
    return ans;
};
struct Point mult_comp(struct Point a,struct Point b)
{
    struct Point ans;
    ans.real=a.real*b.real-a.img*b.img;
    ans.img=a.real*b.img+a.real*b.img;
    return ans;
};
int main()
{
    struct Point Comp1,Comp2;
    scanf("%d+%di\n",&Comp1.real,&Comp1.img);
    scanf("%d+%di",&Comp2.real,&Comp2.img);
    printf("\n");
    struct Point A,M;
    A=add_comp(Comp1,Comp2);
    M=mult_comp(Comp1,Comp2);
    printf("The addition of 2 Complex number is       %d+%di\n\n",A.real,A.img);
    printf("The multiplication of 2 Complex number is %d+%di\n",M.real,M.img);
    return 0;

}
#include<stdio.h>

int main()
{
    int b,h;
    printf("Please enter base value:\n ");
    scanf("%d",&b);
    printf("Please enter height:\n ");
    scanf("%d",&h);

    float area;
    area=0.5*b*h;
    printf("Your triangle Area is %.2f\n\n",area);
    //ফরমেট স্পেসিফায়ার এর আগে প্রিন্ট এফ এ % এর পরে দশমিক যত দিব তত সংখ্যক দশমিক ঘর আসবে।
    printf("Thank you\n");

    return 0;

}

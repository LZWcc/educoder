#include<stdio.h>


int main(void)
{
    /*********Begin*********/
    double x;
    scanf("%lf",&x);
    double y=x<1?x:x<10?2*x-1:3*x-11;
    printf("%.2f",y);
    /*********End**********/ 
    return 0;
}

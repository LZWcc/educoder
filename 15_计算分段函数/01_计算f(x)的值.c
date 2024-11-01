#include<stdio.h>
int main()
{
    double x,y;
    
    scanf("%lf",&x);
    if(x!=0)
    {
        y=1/x;
    }
    else
    {
        y=0;
    }
    printf("f(%.2f)=%.1f\n",x,y);
    return 0;
}
#include<stdio.h>

main()
{
    int money;
    scanf("%d",&money);
    double a;
    if(money<=1600){
        a=.0;
    }else if(money<=2500){
        a=(money-1600)*0.05;
    }else if(money<=3500){
        a=(money-1600)*0.10;
    }else a=(money-1600)*0.15;
    printf("%.2f",a);
}
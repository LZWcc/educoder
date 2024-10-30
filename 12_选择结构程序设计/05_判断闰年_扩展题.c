#include<stdio.h>


int main(void)
{
    /*********Begin*********/
    int year;
    scanf("%d",&year);
    if(year%4==0 && (year%400==0 || year%100!=0))printf("%d是闰年！",year);
    else printf("%d不是闰年！",year);
    /*********End**********/ 
    return 0;
}

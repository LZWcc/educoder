#include <stdio.h>
#define  M 13
int main()
{
    /********** Begin **********/
	int days[M] = {0,31,28,31,30,31,30,31,31,30,31,30,31};    //按人的习惯从1开始
	int year,month,day,sum=0;
	scanf("%d%d%d", &year,&month,&day);
    for(int i=1;i<month;i++)sum+=days[i];
    sum+=day;
    if((year%4==0 && year%100!=0) || year%400==0)sum++;
    printf("%d\n",sum);
	/********** End **********/
	return 0;
}
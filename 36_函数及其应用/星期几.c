#include <stdio.h> 
int getWeek(int day)
{
	/**********Begin**********/
    const int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int d=day%100,y=day/10000,m=day/100%100;
    int sum=3+y+d;
    for(int i=1900;i<y;i+=4){
        if(i%400==0||i%100!=0)sum++;
    }
    for(int i=1;i<m;i++)sum+=month[i];
    if(m>2&&y%4==0&&(y%100!=0||y%400==0))sum++;
    return sum%7;
    /**********End**********/
}

void printWeek(int w)
{
	/**********Begin**********/
	const char week[][10]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    printf("%s\n",week[w]);




	
    /**********End**********/
}
int main()
{
	int date;
   scanf("%d",&date);
   int week = getWeek(date);
   printWeek(week);
	return 0;
}

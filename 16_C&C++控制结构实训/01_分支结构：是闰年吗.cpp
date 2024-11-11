// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int year;
    // 请在此添加代码，判断输入的年份是否位闰年，是则输出"Yes"，否则输出"No"
    /********** Begin *********/
	cin>>year;
    if(year%4==0 &&(year%100!=0 || year%400==0))cout<<"Yes";
    else cout<<"No";
    /********** End **********/
    return 0;
}
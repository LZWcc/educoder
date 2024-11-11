// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    // n-输入的数，m-重排后的数
    int n, m;
    // 请在此添加代码，输入一个小于1000的正整数，重排出最大的数存入m中
    /********** Begin *********/
    cin>>n;
    int a=n/100,b=n/10%10,c=n%10;
    if(a<b){a^=b;b^=a;a^=b;}
    if(b<c){b^=c;c^=b;b^=c;}
    if(a<b){a^=b;b^=a;a^=b;}
    m = a*100+b*10+c;
    /********** End **********/
    // 输出重排后的数
    cout << m << endl;
    return 0;
}
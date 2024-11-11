// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    // 请在此添加代码，输出整数进入黑洞过程
    /********** Begin *********/
    cin>>n;int a,b,c,cnt=0;
    while(n!=495){
        cnt++;
        a=n/100,b=n/10%10,c=n%10;
        if(a<b){a^=b;b^=a;a^=b;}
        if(b<c){b^=c;c^=b;b^=c;}
        if(a<b){a^=b;b^=a;a^=b;}
        n = (a*100+b*10+c)-(c*100+b*10+a);
        cout << cnt << ":" << a*100+b*10+c << "-" << c*100+b*10+a << "=" << n << endl;
    }
    /********** End **********/
    return 0;
}
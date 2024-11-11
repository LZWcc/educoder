// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n;

    // 请在此添加代码，输入正整数n，如果n是素数则输出“Yes”，否则输出“No”
    /********** Begin *********/
    cin>>n;int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"No"<<endl;
            break;
        }
    }if(i==n)cout<<"Yes"<<endl;
    /********** End **********/

    return 0;
}
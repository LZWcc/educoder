// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n, k;
    // 请在此添加代码，输入n和k，并输出n以内k个素数以及它们的和
    /********** Begin *********/
    cin>>n>>k;n++;
    int p[n],cnt=0,sum=0;
    p[0]=0,p[1]=0;
    for(int i=2;i<n;i++)p[i]=1;
    for(int i=2;i<n;i++){
        if(p[i]==1)for(int j=i*i;j<n;j+=i)p[j]=0;
    }
    for(int i=n-1;i>0&&cnt<k;i--){
        if(p[i]==1){
            cnt++;
            cout<< i <<" ";
            sum+=i;
        }
    }
    cout<<sum;
    /********** End **********/

    return 0;
}
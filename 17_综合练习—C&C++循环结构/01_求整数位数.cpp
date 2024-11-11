/*------------------------------------------------------
注意：仅在标有"Begin"和"End"的注释行之间补充填写代码，
      请勿改动任何已有内容。
------------------------------------------------------*/
#include <iostream>
using namespace std;

int main()
{
	/********* Begin *********/
    int n;
    cin >> n;
    if(n>=0){
        int cnt = 0;
        while(n>0){
            n/=10;
            cnt++;
        }
        if(cnt==0)cnt++;
        cout << cnt << endl;
    }
    else cout << "Error" << endl;
	/*********  End  *********/
	return 0;
}

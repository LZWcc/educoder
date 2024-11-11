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
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-i-1);j++)cout<<" ";
        for(int j=0;j<=i;j++)cout<<(char)('A'+j);
        for(int j=i-1;j>=0;j--)cout<<(char)('A'+j);
        cout<<endl;
    }
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<(n-i-1);j++)cout<<" ";
        for(int j=0;j<=i;j++)cout<<(char)('A'+j);
        for(int j=i-1;j>=0;j--)cout<<(char)('A'+j);
        cout<<endl;
    }
	/*********  End  *********/
	return 0;
}

/*------------------------------------------------------
注意：仅在标有"Begin"和"End"的注释行之间补充填写代码，
      请勿改动任何已有内容。
------------------------------------------------------*/
#include <iostream>
using namespace std;

int main()
{
	/********* Begin *********/
    int sum;
	for(int i=2;i<=1000;i++){
        sum = 0;
        for(int j=1;j<i;j++){
            if(i%j==0)sum+=j;
        }
        if(sum == i)cout << i << " ";
    }

	
	/*********  End  *********/
	return 0;
}

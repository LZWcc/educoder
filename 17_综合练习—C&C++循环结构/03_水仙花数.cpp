/*------------------------------------------------------
注意：仅在标有"Begin"和"End"的注释行之间补充填写代码，
      请勿改动任何已有内容。
------------------------------------------------------*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	/********* Begin *********/
    int a,b,c;
    for(int i=100;i<1000;i++){
        a=i/100;b=i/10%10;c=i%10;
        if(a*a*a+b*b*b+c*c*c==i)cout << i << " ";
    }    
	/*********  End  *********/
	return 0;
}

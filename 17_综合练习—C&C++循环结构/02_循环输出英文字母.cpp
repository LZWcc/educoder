/*------------------------------------------------------
注意：仅在标有"Begin"和"End"的注释行之间补充填写代码，
      请勿改动任何已有内容。
------------------------------------------------------*/
#include <iostream>
using namespace std;

int main()
{
    /********* Begin *********/
    char c;
    cin >> c;
    if(c=='a'||c=='A')for(int i=0;i<26;i++)cout << (char)(c+i);
    else cout << "Error";
    cout << endl;
    /*********  End  *********/
    return 0;
}

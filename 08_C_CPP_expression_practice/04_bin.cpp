#include <stdio.h>  
#include <iostream>  
using namespace std;  
  
int main()  
{  
    char c;     // c-存储输入的字符  
    cin >> c;     // 输入字符  
    // 请在Begin-End之间添加代码，输出 c 的 8 位二进制表示  
    /********** Begin *********/  
    cout<<(int)(bool)(c&0x80)<<(int)(bool)(c&0x40)<<(int)(bool)(c&0x20)<<(int)(bool)(c&0x10)<<
          (int)(bool)(c&0x08)<<(int)(bool)(c&0x04)<<(int)(bool)(c&0x02)<<(int)(bool)(c&0x01);
    /********** End **********/  
    return 0;  
}

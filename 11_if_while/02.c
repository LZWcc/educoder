//包含标准输入输出函数
#include <stdio.h>
#include<math.h>
//定义main函数
int main()
{
    //请在此添加‘求水仙花数’的代码
    /*****************Begin******************/
    for(int i = 100 ; i <= 999; i++)
    {
        int bai = pow((i / 100),3);
        int shi = pow((i / 10 % 10),3);
        int ge  = pow((i % 10 ),3);
        int res = ge + shi + bai;
        if(i==(ge+shi+bai))
        {
            printf("%d ",i);
        }
        else
        {
            continue;
        }
    }
    return 0;
}
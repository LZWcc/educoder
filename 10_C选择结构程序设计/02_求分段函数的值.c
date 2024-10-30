#include <stdio.h>

//定义main函数
int main()
{
	//请在此添加‘求分段函数的值’的代码
    /*****************Begin******************/
    double x;
    scanf("%lf",&x);
    printf("%g",x<1?x:x<10?2*x-1:3*x-11);
    /***************** End ******************/
    return 0;
}

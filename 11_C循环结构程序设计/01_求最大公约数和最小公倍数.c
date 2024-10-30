//包含标准输入输出函数
#include <stdio.h>

int m(int a,int b){
    if(b>a){a^=b;b^=a;a^=b;} //交换a和b的值，使a>=b
    while(b>0){
        a%=b;
        a^=b;
        b^=a;
        a^=b;
    }
    return a;
}

//定义main函数
int main()
{
    //请在此添加‘求最小公倍数和最大公约数’的代码
    /*****************Begin******************/
    int a,b;
	scanf("%d %d",&a,&b);
    int n = m(a,b);
	printf("%d %d",n,a*b/n);
    /***************** End ******************/
    return 0;
}

#include <stdio.h>
#include <math.h>
int judgePrime(int);
int main()
{
	int n;
	while (scanf("%d", &n) != EOF) { //多组数据输入的基本框架
		printf(judgePrime(n) ? "yes\n" : "no\n"); // 用条件表达式使表述更为精炼
	}
	return 0;
}

int judgePrime(int n) { //函数完成判断一个数是否为素数
	/**********Begin**********/
    if(n<=1)return 0;
    for(int i=2;i<n;i++)
        if(n%i==0)return 0;
    return 1;


    /**********End**********/
}

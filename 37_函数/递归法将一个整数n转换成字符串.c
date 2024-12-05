#include<stdio.h> 
void figureTrasform(int n){
	//在此写入函数体
	//在函数体内实现输出
	//注意主函数，非常重要 
	/*****************Begin******************/
    if(n<0)printf("- "),n=-n;
	if(n/10)figureTrasform(n/10);
    putchar(n%10+'0');
    putchar(' ');
    /***************** End ******************/ 
}

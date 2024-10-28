//包含标准输入输出函数
#include <stdio.h>
//定义main函数
int main()
{
    //请在此添加‘输出菱形’的代码
    /*****************Begin******************/
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++)printf(" ");
        printf("*");
    	for(int j=0;j<i;j++)printf("**");
        printf("\n");
	}for(int i=n-2;i>=0;i--){
        for(int j=1;j<n-i;j++)printf(" ");
        printf("*");
    	for(int j=0;j<i;j++)printf("**");
        printf("\n");
	}
    /***************** End ******************/
    return 0;
}

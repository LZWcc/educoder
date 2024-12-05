//包含标准输入输出函数
#include<stdio.h>
//字符串处理函数 
#include<string.h> 
//基本框架如下，请在此添加‘反序输出’的代码
/********** 修改以下代码 **********/
char reverseOutput(char str[]);
int main(){
    char str[1001];
    scanf("%s",&str);
    reverseOutput(str);
    puts(str);
    return 0; 
} 
//函数主体
char reverseOutput(char str[]){
    int right = strlen(str)-1;
    int left=0;
    while(left<right){
        char temp=str[left];
        str[left]=str[right];
        str[right]=temp;
        left++;right--;
    }
}
/* or 
int reverseOutput(...){
    ...
}
or else
...
*/
/********** 修改代码区间 **********/

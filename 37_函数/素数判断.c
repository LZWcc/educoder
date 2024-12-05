//包含标准输入输出函数
#include<stdio.h>
//基本框架如下，请在此添加‘素数判断’的代码
/********** 修改以下代码 **********/
int isPrime(int n);
int main(){
    int n;
    scanf("%d", &n);
    if(isPrime(n)){
        printf("%d是一个素数\n", n);
    }
    else{
        printf("%d不是一个素数\n", n);
    }
    return 0; 
} 
//函数主体
int isPrime(int n){
    if(n <= 1){
        return 0;
    }
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
/* or 
int isPrime(...){
    ...
}
or else
...
*/
/********** 修改代码区间 **********/
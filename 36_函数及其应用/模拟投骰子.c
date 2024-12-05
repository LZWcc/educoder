#include <stdio.h>
#include <stdlib.h>
int main()
{
	/**********Begin**********/
    int a = rand(); // 初始化随机数种子
    a = a % 6 + 1; // 随机生成1-6的随机数
    printf("Dice is: %d",a);
    printf("\n");
    if(a%2==0)printf("win");
    else printf("lose");

	/**********End**********/
	return 0;
} 
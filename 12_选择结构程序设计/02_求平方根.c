#include<stdio.h>
#include<math.h>

int main(void)
{ 
    /*********Begin*********/
    int x;
    printf("请输入一个小于1000的正数:");
    scanf("%d",&x);
    if(x>=1000)printf("输入数大于1000，请重新输入.");
    else if(x<0)printf("输入数非正数，请重新输入.");
    else printf("平方根为:%d",(int)sqrt(x));
    /*********End**********/ 
    return 0;
}

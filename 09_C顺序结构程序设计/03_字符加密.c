#include <stdio.h>
//定义main函数
char encode(char a){
    a+=4;
    if ((a>='a' && a<='z')||(a>='A' && a<= 'Z'));
    else a-=26;
    return a;
}

int main()
{
    char c1,c2,c3,c4,c5;
    //请在此添加‘字符加密’的代码
    /*****************Begin******************/
    scanf("%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5);
    c1 = encode(c1);
    c2 = encode(c2);
    c3 = encode(c3);
    c4 = encode(c4);
    c5 = encode(c5);
    printf("%c%c%c%c%c",c1,c2,c3,c4,c5);
    /***************** End ******************/
    return 0;
}

#include <stdio.h>
int main()
{
    int n, i;   // 变量n用来控制整数的数量，变量i用来控制循环的次数
    int min, a; // 变量min用来存储最小值，变量a用来存储输入的整数
    scanf("%d", &n);
    scanf("%d", &min);      // 输入的第一个整数放进min中，因为只输入了一个整数，所以它就是最小的
    for (i = 1; i < n; i++) // 请补充该语句
    {
        scanf("%d", &a);
        if (a < min) // 请补充该分支
        {
            min = a;
        }
    }
    printf("%d", min);
    return 0;
}
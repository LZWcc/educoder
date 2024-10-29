// 包含标准输入输出函数
#include <stdio.h>
// 定义main函数
int main()
{
    // 请在此添加‘求最小公倍数和最大公约数’的代码
    /*****************Begin******************/
    int m, n, temp;
    scanf("%d %d", &m, &n);
    int num1 = m;
    int num2 = n;
    if (m > n)
    {
        while (n != 0)
        {
            temp = m % n;
            m = n;
            n = temp;
        }
        printf("%d ", m);
        printf("%d", num1 * num2 / m);
    }
    else
    {
        while (m != 0)
        {
            temp = n % m;
            n = m;
            m = temp;
        }
        printf("%d ", n);
        printf("%d", num2 * num1 / n);
    }

    /***************** End ******************/
    return 0;
}

#include <stdio.h>
// 定义main函数
int main()
{
    // 定义三个数
    int a, b, c;
    /*****************Begin******************/
    scanf("%d,%d,%d", &a, &b, &c);
    int  arr[] = {a, b, c};
    int length = sizeof(arr) / sizeof(int);
    for (int j = 0; j < length; j++)
    {
        for (int i = 0; i < length - 1 - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    printf("min=%d",arr[0]);
    /***************** End ******************/
    return 0;
}
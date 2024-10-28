#include <stdio.h>
//定义main函数
int main()
{
    char c1,c2,c3,c4,c5;
    //请在此添加‘字符加密’的代码
    /*****************Begin******************/
    scanf("%c %c %c %c %c",&c1,&c2,&c3,&c4,&c5);
    int arr[5] = {c1,c2,c3,c4,c5};
    for(int i = 0 ; i<=4 ; i++)
    {
        if(arr[i] >= 'a' && arr[i] <= 'z')
        {
            if (arr[i]+4>'z')
            {
                arr[i] = arr[i] - 26 + 4; 
            }
            else
            {
                arr[i] = arr[i] + 4;
            }
            
        }
        else if(arr[i] >= 'A' && arr[i] <= 'Z')
        {
             if (arr[i]+4>'z')
            {
                arr[i] = arr[i] - 26 + 4; 
            }
            else
            {
                arr[i] = arr[i] + 4;
            }
        }
    }
    printf("%c%c%c%c%c",arr[0], arr[1], arr[2], arr[3], arr[4]);
    /***************** End ******************/
    return 0;
}
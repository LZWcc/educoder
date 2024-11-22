#include "stdio.h"
#include "string.h"

int main()
{
    char s[80];
    int i, j;
    scanf("%s", s);
    printf("The original string: \n");
    puts(s);
    /***** 以下一行有错误 *****/
    for (i = j = 0; s[i] != '\0'; i++)
    {
        if (s[i] != 'c')
            /***** 以下一行有错误 *****/
            s[j++] = s[i];
    }
    /***** 以下一行有错误 *****/
    s[j] = '\0';
    printf("The string after deleted: \n");
    puts(s);
    return 0;
}

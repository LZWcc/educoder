#include<stdio.h>

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int he = num1+num2;
    int cha = num1-num2;
    int ji = num1*num2;
    int chu = num1/num2;

    printf("%5d + %-6d= %10d\n", num1, num2, he);
    printf("%5d - %-6d= %10d\n", num1, num2, cha);
    printf("%5d * %-6d= %10d\n", num1, num2, ji);
    printf("%5d / %-6d= %10d\n", num1, num2, chu);




    return 0;
}

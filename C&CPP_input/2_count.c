#include<stdio.h>
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int he = num1+num2;
    int cha = num1-num2;
    int ji = num1*num2;
    int chu = num1/num2;

    printf(" %d + %d   = %d\n", num1, num2, he);
    printf(" %d - %d   = %d\n", num1, num2, cha);
    printf(" %d * %d   = %d\n", num1, num2, ji);
    printf(" %d / %d   = %d\n", num1, num2, chu);

    return 0;
}

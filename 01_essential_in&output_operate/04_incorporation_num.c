#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int age = a%10;
    int ashi = a/10;
    int bge = b%10;
    int bshi = b/10;
    int result = bge * 1000 + age * 100 + bshi *10 + ashi;
    printf("%d",result);
    

    return 0;
}

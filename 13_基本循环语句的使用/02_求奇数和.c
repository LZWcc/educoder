#include<stdio.h>
int main()
{
  int n,sum=0;
  scanf("%d",&n);//输入第一个正整数
  while(n!=0)//请将该句补充完成，让该循环能够输入一批正整数，以0为结束标志
  {
        if(n%2)//请将该分支语句补充完整，用于判断奇数并做累加
        {
            sum+=n;
        }
        scanf("%d",&n);
  }
  printf("%d",sum);
}
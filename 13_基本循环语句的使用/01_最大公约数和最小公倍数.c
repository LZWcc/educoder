#include<stdio.h>
int main()
{
  int m,n,j,k;
  do
  {
    
        scanf("%d",&m);//输入整数m
        scanf("%d",&n);// 输入整数n
  }while(m<=0||n<=0);//请修改本行的错误
  j=m;
  while(j%n!=0)//请修改本行的错误
	  j=j+m;
 k=(m*n)/j;
  
  printf("最大公约数是%d\n最小公倍数是%d\n",k,j);
  return 0;
}
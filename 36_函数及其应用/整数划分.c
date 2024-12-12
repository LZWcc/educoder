#include <stdio.h>
#include <math.h>
#define MAXN 105  //宏定义，根据题面指定数据范围设定二维数组的大小
int s[MAXN][MAXN]; //定义全局二维数组
int IntDivide(int n, int m)
{
	/**********Begin**********/
    if(n==0)return 1;
	int sum=0;
    for(int i=1;i<=n&&i<=m;i++){
        sum+=IntDivide(n-i,i);
    }
    return sum;
	/**********End**********/
}
int main()
{
	int m, n;
	int res ;
	int i;
	scanf("%d",&i);
	while (i--) {
		scanf("%d ", &m); 
		res = IntDivide(m, MAXN);
		printf("%d\n",res);
	}
}
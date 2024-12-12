#include <stdio.h>
#include <math.h>
double eps = 1e-5; //误差精度要求

/**********Begin**********/

double f(double x) //目标函数
{
	return sin(x*x);

	
}
double simpson(double l, double r)  //Simpon公式
{
	double sum=0.0;
    for(int i=0;i<=1000;i++)sum+=fabs(f(l+(r-l)/1000*i)*((i==0||i==1000)?1:(i%2)?4:2));
    return sum*(r-l)/3000;
}
double solve(double l, double r, double ans)
{
	return ans;


}

/**********End**********/
int main()
{
	double n;
	scanf("%lf", &n);
	printf("%.2f", solve(0, n, simpson(0, n)));
	return 0;
}
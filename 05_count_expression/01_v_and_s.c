#include<stdio.h>
int main()
{
	float t;
	float a;
	float v0; 
	float v;
	float s;
	scanf("%f%f%f",&t,&a,&v0);
 
    /********** Begin *********/
	v = v0 + a*t;
    s = v0*t + 0.5*a*t*t;

    printf("当初始速度为%.2f时\n",v0);
    printf("%.2fs时的速度为%.2f\n",t,v);
    printf("%.2fs时的位移为%.2f\n",t,s);
	/********** End **********/
	return 0;
}


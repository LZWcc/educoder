#include<stdio.h>
#define  PI  3.14159
int main()  
{
	//第1题	
	
	int a, b, c;  
	a = 3;
  b = 2;
  c = 5;
	/********** Begin **********/
	int f = (a+b)*c;
  printf("%d\n",f);
	//第2题
	int num; 
	scanf("%d",&num);
  printf("The result is: %d\n",num);

	//第3题
	float r,area;
	scanf("%f",&r);
	area= PI * r * r;
	printf("area = %f\n",area);
	/********** End **********/
	
	return 0;
}

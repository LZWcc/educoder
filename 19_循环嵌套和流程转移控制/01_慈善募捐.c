#include <stdio.h>
#define SUM 100000
int main()
{   
	float number,aver,total;  
	int i;
	for (i=1,total=0;i<=10000;i++)                      
	{ 
		scanf("%f",&number);
		
	/********** Begin **********/	
		total=total+number; 

	/********** End **********/
	
			
		if (total>=SUM)
			
	/********** Begin **********/
    break; 

	/********** End **********/		
	
	}
	aver=total / i;  
	printf("num = %d\naver = %.2f\n", i, aver);              
	return 0;
}

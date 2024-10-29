#include<stdio.h>
	int main(void)
	{  
	  /*********Begin*********/
	  float x;
      scanf("%f",&x);
      if (x<1)
      {
        float case1 = x;
        printf("%.2f",case1);
      }
      else if(1<=x && x<10)
      {
        float case2 = 2*x-1;
        printf("%.2f",case2);
      }
      else
      {
        float case3 = 3*x-11;
        printf("%.2f",case3);
      }
	  
	  /*********End**********/ 
       return 0;
	}

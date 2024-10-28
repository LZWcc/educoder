#include<stdio.h>
	int main(void)
	{  
	  /*********Begin*********/
	  int m,t;
	  scanf("%d,%d",&m,&t);
      m = m>t?t:m;
      scanf(",%d",&t);
      m = m>t?t:m;
      printf("min=%d",m);
	  /*********End**********/ 
       return 0;
	}
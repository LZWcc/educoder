#include <stdio.h>
int main( )
{   
	int a, b, c, k, n = 5;
	double s;
	s = 0.0; a = 2; b = 1;
	
	for ( k = 1; k <= n; k++ ) 
	{
		
	/*****以下一行有错误*****/
		s = s + (double)a / b;
		
	/*****以下一行有错误*****/
		c=b;b=a;a+=c; 
		
	} 
	printf( "s%d = %lf\n", n, s); 
	
	return 0;
}



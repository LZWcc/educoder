#include<stdio.h>
#define M 3
#define N 4
int main()
{  
    int a[M][N]; 
    int i,j,max,row=0,colum=0; 
    /*输入M*N个数*/
    for(i=0; i<M; i++)              // 控制行 
      for(j=0; j<N; j++)            // 控制列 
      	{ 
          scanf("%d",&a[i][j]);   // 输入数组元素 
       } 
    /*遍历二维数组求最大值及行号列号*/ 
    /*********Begin*********/
    max = a[row][colum];
    for(int i=0; i<M; i++)for(int j=0; j<N; j++)if(a[i][j]>max)max=a[i][j],row=i,colum=j;
    /*********End**********/ 
    /*按M行N列格式输出M*N的二维数组*/
	for(i=0; i<M; i++)              // 控制行 
	{  
       for(j=0; j<N; j++)          // 控制列 
       {  
        	printf("%d\t",a[i][j]);   // 输入数组元素 
    	}
    	printf("\n"); 
  	}
 	 printf("max:%d\nrow:%d\ncolum:%d\n",max, row+1, colum+1); 
    return 0; 
}


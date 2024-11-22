#include<stdio.h>
#define N 20
int main()
{

	int a[N]={ 0 }, b[N]={ 0 };
	int i,j,k,anum,bnum,c[N+N];
	scanf("%d",&anum);   //输入数组a元素个数
	for(i=0;i<anum;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&bnum);   //输入数组b元素个数
	for(i=0;i<bnum;i++)
	{
		scanf("%d",&b[i]);
	}
	/***** 在数组a和b都有数据时比较两个数组 *****/
	/********** Begin *********/
	i=j=k=0;
	while(i<anum&&j<bnum)if(a[i]<b[j])c[k++]=a[i++];
    else c[k++]=b[j++];
	/********** End **********/
	/***** 如果数组a还有数据 *****/
	/********** Begin *********/
	while(i<anum)c[k++]=a[i++];
    
	/********** End **********/

	/***** 如果数组b还有数据 *****/
	/********** Begin *********/
	while(j<bnum)c[k++]=b[j++];
    
	/********** End **********/
	/***** 输出数组c *****/
	/********** Begin *********/
	for(int x=0;x<k;x++)printf("%d ",c[x]);
    
	/********** End **********/	
	return 0;
}

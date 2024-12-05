#include <stdio.h>
#define N 10

void  fun(int arr[],int n)
{
  	/********** Begin **********/
    int left=0,right=n-1;
    while(left<right){
        int t=arr[left];
        arr[left]=arr[right];
        arr[right]=t;
        left++;right--;
    }
	/**********  End  **********/
}

int main()
{
	int a[N],i;
	for(i=0;i<N;i++) scanf("%d",&a[i]);
	fun(a,10);
	for(i=0;i<N;i++) printf("%d ",a[i]);
	return 0;
}

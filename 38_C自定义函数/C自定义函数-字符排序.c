#include<stdio.h>

void  fun(char s[],int num)
{
	/********** Begin **********/
    char max;
	for(int i=0;i<7;i++){
        max=i;
        for(int j=i;j<8;j++){
            if(s[max]<s[j])max = j;
        }
        char t=s[i];
        s[i]=s[max];
        s[max]=t;
    }
	/**********  End  **********/
}

int main()
{
	char s[10];
	printf("输入8个字符的字符串:");
	scanf("%s",s);
	fun(s,8);
	printf("%s\n",s);
	return 0;
}

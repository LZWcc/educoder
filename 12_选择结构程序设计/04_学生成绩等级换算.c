#include<stdio.h>


int main(void)
{
    /*********Begin*********/
    int score;
    scanf("%d",&score);
    char g;
    g = score<0?0:score<60?'E':score<70?'D':score<80?'C':score<90?'B':score<=100?'A':0;
    if(g==0)printf("Score is error!");
    else printf("%c",g);
    /*********End**********/ 
    return 0;
}

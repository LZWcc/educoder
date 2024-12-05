#include <stdio.h>

char fun(int s)
{        
	char grade;     // 存储分数对应的等级
	/********** Begin **********/
	if(s<60)grade='E';
        else if(s==100)grade = 'A';
        else grade = 'D'-(s-60)/10;
        return grade;
	/**********  End  **********/
}

int main (void)
{
        int  score;
        scanf ("%d", &score);
        printf("The grade is: %c\n", fun(score));
        return 0;
}

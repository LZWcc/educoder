#include <stdio.h>
int main(void)
{
    /*********Begin*********/
    float grade;
    scanf("%f", &grade);
    if (grade > 89 && grade <= 100)
    {
        printf("A");
    }
    else if (grade >= 80 && grade <= 89)
    {
        printf("B");
    }
    else if (grade >= 70 && grade <= 79)
    {
        printf("C");
    }
    else if (grade >= 60 && grade <= 69)
    {
        printf("D");
    }
    else if (grade >= 0 && grade < 60)
    {
        printf("E");
    }
    else
    {
        printf("Score is error!");
    }

    /*********End**********/
    return 0;
}
#include<stdio.h>
#include<math.h>
main()
{
  float money,rate,interest;
  int year;
  /******根据题意在下面写上合适的语句********/
  scanf("%f %d %f",&money,&year,&rate);
  interest = powf(1+rate,year)*money-money;



  /****************************************/
  printf("interest=%.2f",interest);

}
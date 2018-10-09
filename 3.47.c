#include<stdio.h>

double rate;
int main(void)
{
  unsigned long current;
scanf("%lu",&current);
scanf("%lf",&rate);

current+=rate*current/100;
printf("after 1 year %lu",current);




}

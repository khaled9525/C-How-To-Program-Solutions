#include<stdio.h>


int main(void)
{

float pi=0;
int c=4;
int step=0;
float i;

for(i=1;i<10000;i+=2)
{
    pi+=c/i;
    c=c*-1;

printf(" %d  %-1f %.1f %-3f %0.4f  %0.5f\n",step++,pi,pi,pi,pi);

}
float p=3.146;
printf("%-2f",p);
return 0;

}


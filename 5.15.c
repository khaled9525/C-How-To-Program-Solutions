
#include<stdio.h>
#include<math.h>
double hyp(double ,double);
int main(void)
{
float x,y;
scanf("%f",&x);
scanf("%f",&y);

printf("%f",hyp(x,y));


return 0;
}
double hyp(double x ,double y)
{
double sum;
    sum=x*x+y*y;
    return sqrt(sum);
}


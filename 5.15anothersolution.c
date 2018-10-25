
#include<stdio.h>
double hyp(double ,double);
float floorSqrt(float );

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
    return floorSqrt(sum);
}
float floorSqrt(float x)
{
    // Base cases
    if (x == 0 || x == 1)
    return x;

    // Staring from 1, try all numbers until
    // i*i is greater than or equal to x.
    int i = 1;
    int result = 1;
    while (result <= x)
    {
      i++;
      result = i * i;
    }
    return i - 1;
}

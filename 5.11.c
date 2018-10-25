#include<stdio.h>
#include<math.h>
float roundToIntegers(float number);
float roundToTenth(float number);
float roundToHundredth(float number);
float roundToThousandth(float number);

int main(void)
{
float x;
    scanf("%f",&x);
    printf("original is %0.2f roundToIntegers  is %0.2f  roundToTenth %f roundToHundredth %f roundToThousandth %f \n",x,roundToIntegers(x),roundToTenth(x),roundToHundredth(x),roundToThousandth(x));
return 0;
}
float roundToIntegers(float number)
{
    return floor(number);
}
float roundToTenth(float number)
{
    return floor(number*10+0.5)/10;
}
float roundToHundredth(float number)
{
    return floor (number*100+0.5)/100;
}

float roundToThousandth(float number)
{
        return floor (number*1000+0.5)/1000;
}

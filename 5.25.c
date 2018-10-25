#include<stdio.h>
float mini(float,float ,float);
int main(void)
{
float a,b,c;
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);

printf("Three floats %f,%f,%f  and minimum is%f",a,b,c,mini(a,b,c));

return 0;
}
float mini(float a,float b,float c)
{
    if(a<=b && a<=c)
    {
        return a;
    }
 if(b<=a && b<=c)
    {
        return b;
    }
     if(c<=b && c<=a)
    {
        return c;
    }
}

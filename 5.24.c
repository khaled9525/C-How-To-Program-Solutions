#include<stdio.h>
float CtoF(float C);
float FtoC(float F);
int main(void)
{
float i;
for(i=0;i<=100;i++)
{
float count;
printf("degree is %f eq to F is %f\n",i,CtoF(i));

}
return 0;
}
float FtoC(float f )
{
    return (f-32)*(9/5);

}
float CtoF(float c)
{
    return ((c*9)/5)+32;
}

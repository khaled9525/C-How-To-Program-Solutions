#include<stdio.h>
float calculteCharges(float);
int main(void)
{
float hours;
float charge;
int i;
static float temp;
static float temp2;

for(i=1;i<=3;i++)
{
printf("\nEnter Hours:\n");
scanf("%f",&hours);
printf("CAR HOURS CHARGE\n");

charge=calculteCharges(hours);

printf("%d %1.1f %0.2f",i,hours,charge);
temp+=charge;

temp2+=hours;

}
printf("\nTOTAL %0.2f %0.2f",temp2,temp);

return 0;
}
float calculteCharges(float x)
{

    float extracharges,extrahours;
    if(x<=3)
    {
        return 2;
    }
    if(x==24)
   {
       return 10;
   }

   else
{
    extrahours=x-3;
    extracharges=(extrahours*0.5)+2;
    return extracharges;
}

}

#include<stdio.h>
int day,month,year,dayc,monthc,yearc;
float max_heartrate;
int main(void)
{
    printf("Enter Your Birthday DAY:");
    scanf("%d",&day);
    printf("Enter Month:");
    scanf("%d",&month);
    printf("Enter Year:%");
    scanf("%d",&year);

printf("Enter Current DAY:");
    scanf("%d",&dayc);
    printf("Enter current Month:");
    scanf("%d",&monthc);
    printf("Enter current Year:");
    scanf("%d",&yearc);
day=dayc-day;
month=monthc-month;
year=yearc-year;
if(day==30)
{
    month++;
}
if(month==30)
{
    year++;
}

printf("Age is : %d\n",year);


    max_heartrate=220-year;
    printf("Max Heart rate is  : %f\n",max_heartrate);

 printf("Target between : %f and %f",max_heartrate*(0.5),max_heartrate*(0.85));
}

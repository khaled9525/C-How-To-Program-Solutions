#include<stdio.h>
unsigned int n,d1,d2,d3,d4,temp1,temp2;


int main(void)
{
    printf("Enter Encrypted");
    scanf("%d",&n);
d1=n%10;
d2=((n%100)/10);
d3=((n%1000)/100);
d4=((n/1000));

temp2=d3;
d3=d1;
d1=temp2;

temp1=d4;
d4=d2;
d2=temp1;
d1=((d1+10)-7)%10;
d2=((d2+10)-7)%10;
d3=((d3+10)-7)%10;
d4=((d4+10)-7)%10;
printf(" value is %d%d%d%d",d4,d3,d2,d1);
printf(" value is %d%d%d%d",d4,d3,d2,d1);


}

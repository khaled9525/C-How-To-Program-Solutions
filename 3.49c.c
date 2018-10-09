#include<stdio.h>
int n,d1,d2,d3,d4,temp1,temp2;


int main(void)
{
    printf("Enter NO");
    scanf("%d",&n);
d1=((n%10)+7)%10;
d2=(((n%100)/10)+7)%10;
d3=(((n%1000)/100)+7)%10;
d4=((n/1000)+7)%10;

temp2=d1;
d1=d3;
d3=temp2;

temp1=d2;
d2=d4;
d4=temp1;

printf("Encrypted value is %d%d%d%d",d4,d3,d2,d1);
}

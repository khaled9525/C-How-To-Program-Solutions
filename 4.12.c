
#include<stdio.h>


int main(void)
{
int i;
int sum=0;

for(i=2;i<=30;i+=2)
{
    sum+=i;
}
printf("%d",sum);

return 0;
}

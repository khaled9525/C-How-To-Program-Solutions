

#include<stdio.h>


int main(void)
{
int i;
int mul=1;

for(i=1;i<=15;i+=2)
{
    mul*=i;
}
printf("%d",mul);

return 0;
}

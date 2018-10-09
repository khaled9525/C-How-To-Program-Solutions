#include<stdio.h>

void dectobin(int i);
int main(void)
{

int i=1;
int x;
int c;
for(i=1;i<=256;i++)
{
 printf("dec is %d  oct is %o hex is %x \t",i,i,i);

 dectobin(i);

}
  }

void dectobin(int i)
{
printf("Bin is ");
int c,x;
    for(c=128;c>=1;c/=2)
    {
x=i/c;
    if(x)
    {
printf("1");
i=i-c;
    }
else
printf("0");

    }

printf("\n");
}




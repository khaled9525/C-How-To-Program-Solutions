#include<stdio.h>

int integerpower(int base ,int exp);
int main(void)
{
int base;
int exp;
scanf("%d",&base);
scanf("%d",&exp);

printf("base is %d exp is %d   result is %d \n",base,exp,integerpower(base,exp));

return 0;
}
int integerpower(int base ,int exp)
{
 int result=1;
 int i;
 for(i=exp;i>0;i--)
 {
     result*=base;
 }
}

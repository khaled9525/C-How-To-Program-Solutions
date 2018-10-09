#include<stdio.h>



int main(void)
{
int l,c;
for(l=1;l<=9;l++)
{
    for(c=1;c<=9;c++)
    {
  if(l>=c)
   printf(" ");
    else
printf("*");
    }

printf("\n");
}










return 0;
}


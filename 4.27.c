#include<stdio.h>

int main(void)
{
int side1,side2,side3;
int counter=1;

for(side1=1;side1<=500;side1++)
{
 for(side2=1;side2<=500;side2++)
{
 for(side3=1;side3<=500;side3++)
 {
  if(side3==(side1*side1)+(side2*side2))
  {
      printf("side1 is %d side2 is %d side3 is %d\n",side1,side2,side3);

  }
 }
}

}
return 0;
}

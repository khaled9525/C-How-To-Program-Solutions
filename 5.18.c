#include<stdio.h>
int evORodd(int);

int main(void)
{
int x;
scanf("%d",&x);
printf("state %d",evORodd(x));
return 0;
}
int evORodd(int k)
{
    if(k%2)
        {
            return 0;
        }
   else
  1      return 1;
}

#include<stdio.h>
int x=1,n;
float e;
int i=1;
int fact(int n);

int main(void)
{
while (i<=4)
{

x=(fact(i));
e+=(1/(x));

i++;

}
e+=2;
printf("%f",e);
}





int fact(int n)
{

if (n!=0)
{
    while(n>=1)
    {
x=n*x;
    n--;
    }
return x;
}
else
    printf("%d",1);
}




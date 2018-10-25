#include<stdio.h>
int checkprim222522e(int);

int main(void)
{
    int n;
    scanf("%d",&n);
   if( checkprime(n))
   {
       printf("%d is a prim no",n);
   }
else
           printf("%d is a non prim no",n);

return 0;
}
int checkprime(int n)
{

    while((n!=2)&&(n!=5)&&(n!=3)&&(n!=11)&&(n!=7))
    {

    if((n%2)&&(n%5)&&(n%3)&&(n%11)&&(n%7))
    {
        return 1;
    }
else
{

    return 0;
}
}
return 1;
}

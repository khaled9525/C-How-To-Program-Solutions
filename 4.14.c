#include<stdio.h>


int main(void)
{

int i;
int fact=1;
int no;
scanf("%d",&no);
if(no!=0)
{


for(i=no;i>0;i--)
{
fact=i*fact;

}

}
else
fact=1;
printf("fact of %d is %d\n",no,fact);
return 0;
}

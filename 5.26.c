#include<stdio.h>

int perfectno(int );
int main(void)

{
int i;
for(i=10;i>0;i--)
{
    if(perfectno(i)!=0){

    printf("  perfect N is %d \n",perfectno(i));
    }
}


return 0;
}
int perfectno(int x)
{
    int j=x-1 ;
   int result=0;
    for(j;j>0;j--)
    {
        if(x%j==1)
        {
        }
else
    result+=j;
    }
    printf("\n result%d\n",result);
    if(x==result)
{
     return x;
}
else
    return 0;
}

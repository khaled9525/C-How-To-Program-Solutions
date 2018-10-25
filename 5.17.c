#include<stdio.h>
int multiple(int,int);

int main(void)
{
int x,y;
scanf("%d",&x);
scanf("%d",&y);
printf("state %d",multiple(x,y));
return 0;
}
int multiple(int k,int r)
{
    if(r%k)
        {
            return 0;
        }
   else
        return 1;
}

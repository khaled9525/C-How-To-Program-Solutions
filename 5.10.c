#include<stdio.h>
#include<math.h>


int main(void)
{
    int i;
    float x;
for (i=1;i<=10;i++)
{
    scanf("%f",&x);
    printf("original is %f  rounded is %0.2f\n",x,floor(x+0.5));
}



}

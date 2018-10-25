#include<stdio.h>
void draw(int);

int main(void)
{
int side;
scanf("%d",&side);
draw(side);



return 0;
}
void draw(int side)
{
int l,c;
    for(l=1;l<=side;l++)
    {
        for(c=1;c<=side;c++)
        {
            printf("*");
        }
    printf("\n");
    }
}

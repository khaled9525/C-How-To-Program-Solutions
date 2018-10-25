#include<stdio.h>
void draw(int,char);
char ch;
int main(void)

{
int side;
scanf("%c",&ch);

scanf("%d",&side);
draw(side,ch);



return 0;
}
void draw(int side,char ch)
{
int l,c;
    for(l=1;l<=side;l++)
    {
        for(c=1;c<=side;c++)
        {
            printf("%c",ch);
        }
    printf("\n");
    }
}


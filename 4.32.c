#include<stdio.h>


int main(void)
{
int l,c;
int row;
scanf("%d",&row);

for(l=1;l<=(row+1)/2;l++)
{
    for(c=(row+1)/2;c>0;c--)
    {
if(c>l)
        printf(" ");
        else
            printf("*");


    }
       for(c=1;c<=l-1;c++)
    {
            printf("*");


    }
    printf("\n");

}

for(l=1;l<=(row-1)/2;l++)
{
          for(c=1;c<=(row+1)/2;c++)
{
    if(c<=l)
        printf(" ");
    else
        printf("*");
}

for((c=((row-1)/2)-1);c>=l;c--)
{

    printf("*");
}
printf("\n");

}

}



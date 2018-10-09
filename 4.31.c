#include<stdio.h>


int main(void)
{

int l,c;
for(l=1;l<=5;l++)
{
    for(c=5;c>0;c--)
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

for(l=1;l<=4;l++)
{
          for(c=1;c<=5;c++)
{
    if(c<=l)
        printf(" ");
    else
        printf("*");
}

for(c=3;c>=l;c--)
{

    printf("*");
}
printf("\n");

}

}



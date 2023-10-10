#include<stdio.h>
#include<stdlib.h>
void main()
{
    int s=7;//number of spaces to be printed
    int i,j;//loop counters
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=s;j++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf(" ");
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
        s--;
    }
  
    
}


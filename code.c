#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=0;i<9;i++)
    {
       for(j=1;j<i;j++)
       {
         printf("01",j);
       }
       printf("\n");
    }

}

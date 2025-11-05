#include <stdio.h>
#include <stdlib.h> 

int main()
{
    for(int length=1; length<=3; length++)
    {
        for(int breadth=1; breadth<=12;breadth++)
        {
            if(length == 1 || length == 3 || breadth == 1 || breadth == 12)
                printf("*");
            else
                printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}
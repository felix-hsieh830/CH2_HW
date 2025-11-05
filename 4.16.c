#include <stdio.h>
#include <math.h>

int main()
{   
    printf("(A)\n");
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n(B)\n");
    for(int i=1;i<=10;i++)
    {
        for(int j=10;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n(C)\n");
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<i;j++)
        {
            printf(" ");
        }
        for(int k=10;k>=i;k--)  
        {
            printf("*");
        }   
        printf("\n");
    }
    printf("\n(D)\n");
    for(int i=1;i<=10;i++)
    {
        for(int k=9;k>=i;k--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}
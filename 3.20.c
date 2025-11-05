#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours;
    float hourly_rate;
    printf("Enter # of hours worked (-1 to end): ");
    scanf("%d",&hours);
    while(hours != -1)
    {
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%f",&hourly_rate);
        if(hours<=40)
            printf("Salary is $%.2f\n\n",hours*hourly_rate);
        else
            printf("Salary is $%.2f\n\n",40*hourly_rate+(hours-40)*hourly_rate*1.5);
        printf("Enter # of hours worked (-1 to end): ");
        scanf("%d",&hours);    
    }
    return 0;
}
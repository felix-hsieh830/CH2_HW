#include <stdio.h>
#include <stdlib.h>

int main()
{
    int employees;
    float salary,wage,hours,rate,pieces;
    while(1)
    {
        printf("Enter number of employees(1=manager, 2=hourly worker, 3=commission worker, 4=pieceworker): ");
        scanf("%d",&employees);
        switch(employees)
        {
            case 1:
            {
                printf("Enter weekly salary: ");
                scanf("%f",&salary);
                printf("Salary is $%.2f\n",salary);
                break;
            }
            case 2:
            {
                printf("Enter hourly wage:");
                scanf("%f",&wage);
                printf("Enter hours worked:");
                scanf("%f",&hours);
                if(hours <= 40)
                    salary = wage * hours;
                else
                    salary = 40 * wage + (hours - 40) * wage * 1.5;
                printf("Salary is $.2f\n",salary);
                break;  
            }       
            case 3:
            {
                printf("Enter gross weekly sales: ");
                scanf("%f",&rate);
                salary = 250 + 0.057 * rate;
                printf("Salary is $%.2f\n",salary);
                break;
            }
            case 4:
            {
                printf("Enter number of pieces produced: ");
                scanf("%f",&pieces);
                printf("Enter wage per piece: ");
                scanf("%f",&salary);
                salary = pieces * pieces;
                printf("Salary is $%.2f\n",salary);
                break;
            }
            default:
                printf("Invalid input\n");
                break;
        }
    }
    return 0;
}
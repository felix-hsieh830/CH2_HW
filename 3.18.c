#include <stdio.h>
#include <stdlib.h>

int main()
{
    float money,salary;
    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f",&money);
    while(money != -1)
    {
        salary=200+0.09* money;
        printf("Salary is: $%.2f\n\n",salary);
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f",&money);
    }
    return 0;  
}
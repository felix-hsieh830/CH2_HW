#include <stdio.h>
#include <math.h>

int main()
{
    int investment = 5000, year = 15;
    float rate, amount1;
    for (int i = 100; i <= 120; i += 5)
    {
        rate = i / 1000.0;
        amount1 = pow(1 + rate, year) * investment;
        printf("15 years at %.1f%% interest: %.2f\n", rate * 100, amount1);
    }
    return 0;
}

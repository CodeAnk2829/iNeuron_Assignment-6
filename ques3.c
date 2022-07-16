// Program to calculate sum of first N Odd natural numbers
#include <stdio.h>
int main()
{
    int N, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &N);
    for (i = 1; i <= N; ++i)
    {
        sum += (2 * i) - 1;
    }
    printf("Sum of first %d Odd natural numbers is %d", N, sum);
    return 0;
}
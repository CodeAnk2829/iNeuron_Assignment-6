// Program to calculate sum of squares of first N natural numbers
#include <stdio.h>
int main()
{
    int N, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &N);
    for (i = 1; i <= N; ++i)
    {
        sum += (i * i);
    }
    printf("Sum of squares of first %d natural numbers is %d", N, sum);
    return 0;
}
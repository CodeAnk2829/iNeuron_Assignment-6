// Program to calculate sum of cubes of first N natural numbers
#include <stdio.h>
int main()
{
    int N, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &N);
    for (i = 1; i <= N; ++i)
    {
        sum += (i * i * i);
    }
    printf("Sum of cubes of first %d natural numbers is %d", N, sum);
    return 0;
}
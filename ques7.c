// Program to Count digits in a given number
#include <stdio.h>
int main(){
    int n, i, count = 0;
    printf("Enter a number\n");
    printf("(Remember 0,1,2,3...9 are digits not numbers)\n");
    scanf("%d", &n);
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    printf("Number of digits in the given number is %d", count);
    return 0;
}
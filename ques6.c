// Program to calculate factorial of a number
#include <stdio.h>
int main(){
    int n, i, factorial = 1;
    printf("Enter a number stricly less than 17: ");
    scanf("%d", &n);
    for(i = 1 ; i <= n ; ++i){
        factorial *= i;
    }
    printf("The factorial of %d is %d", n, factorial);
    return 0;
}
// This program will work upto n = 16
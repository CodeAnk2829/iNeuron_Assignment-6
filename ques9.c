// Program to calculate LCM of two given numbers
#include <stdio.h>
int main(){
    int a, b, i, max;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    max = (a >= b) ? a : b; 
    for(i = max; i <= (a * b); i += max){
        if((i % a == 0) && (i % b == 0)){
            printf("LCM of %d and %d is %d", a, b, i);
            break;
        }
    }
    return 0;
}
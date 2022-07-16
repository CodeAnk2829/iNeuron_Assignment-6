// Program to check whether a given number is Prime or Not
#include <stdio.h>
int main(){
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 2; i < n; ++i){
        if(n % i == 0)
        break;
    }
    if(i == n){
        printf("%d is Prime", n);
    }else{
        printf("%d is Not Prime", n);
    }
    return 0;
}
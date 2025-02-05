#include <stdio.h>

char* welcome() {
    int num;
    scanf("%d" , &num);
    if (num % 5 == 0 && num % 11 == 0){
        printf("Divisible");
    }
    else{
        printf("Not Divisible");
    }
}

int main() {
    welcome();
    return 0;
}
#include <stdio.h>

char* welcome() {
    int num;
    scanf("%d" , &num);
    if (num % 2 == 0){
        printf("Even");
    }
    else {
        printf("Odd");
    }
}

int main() {
    welcome();
    return 0;
}
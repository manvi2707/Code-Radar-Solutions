#include <stdio.h>

char* welcome() {
    int num;
    scanf("%d" , &num);
    if (num > 0){
        printf("Positiive");
    }
    if else(num < 0){
        printf("Negative");
    }
    else{
        printf("Zero");
    }
}

int main() {
    welcome();
    return 0;
}
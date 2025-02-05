#include <stdio.h>

char* welcome() {
    int num;
    scanf("%d" , &num1);
    if (num1 > 0){
        printf("Positiive");
    }
    else if(num < 0){
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
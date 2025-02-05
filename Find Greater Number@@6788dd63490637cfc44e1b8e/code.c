#include <stdio.h>

char* welcome() {
    int num1 , num2;
    scanf("%d %d" , &num1 , &num2);
    if (num1 > num2){
        printf("%d" , num1);
    }
    else{
        printf("%d" , num2);
    }
}

int main() {
    welcome();
    return 0;
}
#include <stdio.h>

char* welcome() {
    int num1 , num2;
    scanf("%d %d" , &num1 , &num2);
    if (num1 == num2){
        printf("Equal");
    }
    else if(num1 > num2){
        printf("First");
    }
    else{
        printf("Second");
    }
}

int main() {
    welcome();
    return 0;
}
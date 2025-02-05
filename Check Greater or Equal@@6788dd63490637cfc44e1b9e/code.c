#include <stdio.h>

char* welcome() {
    int num1 , num2;
    scanf("%d %d" , &num1 , &num2);
    if (num1 >= num2){
        printf("Yes");
    }
    else{
        printf("No");
    }
}

int main() {
    welcome();
    return 0;
}
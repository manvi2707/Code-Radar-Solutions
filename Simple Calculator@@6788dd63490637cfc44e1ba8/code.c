#include <stdio.h>

int welcome() {
    int num1 , num2;
    char symbol;
    scanf("%d %d %c" , &num1 , &num2 , &symbol);
    if  (symbol == '+'){
        return num1 + num2;
    }
    else if (symbol == '-'){
        return num1 - num2;
    }
    else if (symbol == '/'){
        if (num2 != 0){
            return num1 / num2;
        }
        else{
            printf("error");
            return -1;
        }
    }
    else if (symbol == '*'){
        return num1 * num2;
    }
    else {
        printf("error");
        return -1;
    }
}

int main() {
    int result = welcome();
    if (result != -1){
        printf("%d" , result);
    }
    return 0;
}
#include <stdio.h>

int welcome() {
    int num1 , num2;
    char symbol;
    scanf("%d %d %c" , &num1 , &num2 , &symbol);
    if  (symbol == '+'){
        return("%d" , num1 + num2);
    }
    else if (symbol == '-'){
        return("%d" , num1 - num2);
    }
    else if (symbol == '/'){
        return("%.0f" , num1 / num2);
    }
    else if (symbol == '*'){
        return("%d" , num1 * num2);
    }
}

int main() {
    printf("%d", welcome());
    return 0;
}
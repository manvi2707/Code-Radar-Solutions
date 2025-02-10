#include <stdio.h>

int welcome() {
    int num1 , num2;
    char symbol;
    scanf("%d %d %c" , &num1 , &num2 , &symbol);
    if  (symbol == '+'){
        int c = num1 + num2;
        return(c);
    }
    else if (symbol == '-'){
        int c = num1 - num2;
        return(c);
    }
    else if (symbol == '/'){
        int c = num1 / num2;
        return(c);
    }
    else if (symbol == '*'){
        int c = num1 * num2;
        return (c);
    }
}

int main() {
    printf("%d", welcome());
    return 0;
}
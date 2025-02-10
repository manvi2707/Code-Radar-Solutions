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
        if (num2 != 0){
            int c = num1 / num2;
            return(c);
        }
        else{
            printf("error");
            return -1;
        }
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
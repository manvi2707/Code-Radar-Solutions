#include <stdio.h>

char* welcome() {
    int num1 , num2;
    scanf("%d %d" , &num1 , &num2);
    if (num1 == num2 * num2){
        return("Yes");
    }
    else{
        return("No");
    }
}

int main() {
    printf("%s", welcome());
    return 0;
}
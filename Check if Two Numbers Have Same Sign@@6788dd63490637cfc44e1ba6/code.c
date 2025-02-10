#include <stdio.h>

char* welcome() {
    int num1 , num2;
    scanf("%d %d" , &num1 , &num2);
    if ((num1 > 0 && num2 > 0) || (num1 < 0 && num2 < 00)){
        return("Same Sign");
    }
    else{
        return("Different Sign");
    }
}

int main() {
    printf("%s", welcome());
    return 0;
}
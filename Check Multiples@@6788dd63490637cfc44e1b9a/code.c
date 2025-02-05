#include <stdio.h>

char* welcome() {
    int divident , divisor;
    scanf("%d %d" , &divident , &divisor);
    if (divident % divisor == 0){
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
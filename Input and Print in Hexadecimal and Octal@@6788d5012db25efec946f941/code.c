#include <stdio.h>

int main(){
    int num;
    scanf("%d" , &num);
    printf("Hexadecimal: %c" , num);
    printf("Octadecimal: %d" , num % 8);
    return 0;
}
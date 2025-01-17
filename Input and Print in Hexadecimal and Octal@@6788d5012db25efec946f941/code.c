#include <stdio.h>

int main(){
    int num;
    scanf("%d" , &num);
    printf("Hexadecimal: %X\n" , num);
    printf("Octadecimal: %o" , num % 8);
    return 0;
}
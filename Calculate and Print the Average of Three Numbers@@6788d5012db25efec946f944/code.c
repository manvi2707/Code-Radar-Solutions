#include <stdio.h>

int main(){
    int num1 , num2 , num3;
    scanf("%i %i %i" , &num1 , &num2 , &num3);
    printf("Average: %.2f" , (num1+num2+num3)/3 );
    return 0;
}
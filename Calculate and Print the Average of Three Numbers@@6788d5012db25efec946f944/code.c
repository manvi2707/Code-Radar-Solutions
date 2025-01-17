#include <stdio.h>

int main(){
    float num1 , num2 , num3 ;
    float av;
    scanf("%i %i %i" , &num1 , &num2 , &num3);
    av = ((num1+num2+num3)/3);
    printf("Average: %.2f" , av);
    return 0;
}
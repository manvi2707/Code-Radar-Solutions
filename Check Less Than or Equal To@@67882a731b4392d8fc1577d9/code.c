#include <stdio.h>

int main(){
    float num1 , num2;
    scanf("%f %f" , &num1 , &num2);
    if (num1 <= num2){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}
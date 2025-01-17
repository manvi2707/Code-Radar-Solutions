#include <stdio.h>

int main(){
    float num1 , num2;
    scanf("%f %f" , &num1 , &num2);
    if (num1 > num2 && num1 == num2) {
        print("True");
    }
    else {
        printf("False");
    }
    return 0;
}
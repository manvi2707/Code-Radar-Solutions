#include <stdio.h>

int main(){
    float num1 , num2;
    scanf("%f %f", &num1 ,&num2);
    if ((num1>0 && num2<0) || (num1 == num2 == 0)){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}
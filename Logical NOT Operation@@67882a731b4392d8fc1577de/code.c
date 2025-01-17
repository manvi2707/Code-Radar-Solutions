#include <stdio.h>

int main(){
    float num1;
    scanf("%f" , &num1);
    if !(num1 > 0){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}
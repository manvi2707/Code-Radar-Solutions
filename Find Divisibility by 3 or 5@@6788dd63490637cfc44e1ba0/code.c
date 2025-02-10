#include <stdio.h>

char* welcome() {
    int num;
    scanf("%d" , &num);
    if (num % 3 == 0 && num % 5 == 0){
        return("Devisible by Both");
    }
    else if(num % 3 && num % 5 != 0){
        return ("Divisible by 3");
    }
    else if(num % 3 !=  0 && num % 5 == 0){
        return("Divisible by 5");
    }
    else{
        return("Nto Divisible");
    }
}

int main() {
    printf("%s", welcome());
    return 0;
}
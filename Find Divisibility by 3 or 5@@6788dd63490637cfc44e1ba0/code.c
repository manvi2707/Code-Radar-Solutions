#include <stdio.h>

char* welcome() {
    int num;
    scanf("%d" , &num);
    if (num % 3 == 0 && num % 5 == 0){
        return("Divisible by Both");
    }
    else if(num % 3 == 0 && num % 5 != 0){
        return ("Divisible by 3");
    }
    else if(num % 3 !=  0 && num % 5 == 0){
        return("Divisible by 5");
    }
    else{
        return("Not Divisible");
    }
}

int main() {
    printf("%s", welcome());
    return 0;
}
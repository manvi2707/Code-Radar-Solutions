#include <stdio.h>

char* welcome() {
    int age , num;
    scanf("%d %d" , &age , &num);
    if (age >= 18 && num == 1){
        return("Eligible");
    }
    else{
        return("Not Eligible");
    }
}

int main() {
    printf("%s", welcome());
    return 0;
}
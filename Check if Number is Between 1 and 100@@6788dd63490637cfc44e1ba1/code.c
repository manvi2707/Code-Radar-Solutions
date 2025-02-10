#include <stdio.h>

char* welcome() {
    int num;
    scanf("%d" , &num);
    if (num >= 1 && num <= 100){
        return("In Range");
    }
    else{
        return("Out of Range");
    }
}

int main() {
    printf("%s", welcome());
    return 0;
}
#include <stdio.h>

char* welcome() {
    int temp;
    scanf("%d" , &temp);
    if (temp > 0){
        return("Above Freezing");
    }
    else{
        return("Freezing");
    }
}

int main() {
    printf("%s", welcome());
    return 0;
}
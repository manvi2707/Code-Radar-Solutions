#include <stdio.h>

char* welcome() {
    int year;
    scanf("%d" , &year);
    if (year % 4 == 0){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
}

int main() {
    welcome();
    return 0;
}
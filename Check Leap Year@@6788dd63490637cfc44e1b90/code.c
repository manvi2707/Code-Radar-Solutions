#include <stdio.h>

char* welcome() {
    int year;
    scanf("%d" , &year);
    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0){
                printf("Leap Year");
            }
            else{
                printf("Not a Leap Year");
            }
        }
        else{
            printf("Leap Year");
        }
    }
    else{
        printf("Not a Leap Year");
    }
}

int main() {
    welcome();
    return 0;
}
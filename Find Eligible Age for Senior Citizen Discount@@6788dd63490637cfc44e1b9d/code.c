#include <stdio.h>

char* welcome() {
    int age;
    scanf("%d" , &age);
    if (age >= 60){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
}

int main() {
    welcome();
    return 0;
}
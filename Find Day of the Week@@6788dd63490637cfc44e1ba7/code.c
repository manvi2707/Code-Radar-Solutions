#include <stdio.h>

char* welcome() {
    int num;
    scanf("%d" , &num);
    if (num > 7 || num <= 0){
        return("Invalid");
    }
    if (num == 1){
        return("Monday");
    }
    else if (num == 2){
        return("Tuesday");
    }
    else if (num == 3){
        return("wednesday");
    }
    else if (num == 4){
        return("Thursday");
    }
    else if (num == 5){
        return("Friday");
    }
    else if (num == 6){
        return("Saturday");
    }
    else if (num == 7){
        return("Sunday");
    }
}

int main() {
    printf("%s", welcome());
    return 0;
}
#include <stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    if (num < 1 || num > 12){
        printf("Invalid month");
    }
    else{
        if (num == 1 || num == 3 || num == 5 || num == 7 || num == 8 || num == 10 || num == 12){
            printf("31");
        }
        else if (num == 2){
            printf("28");
        }
        else {
            printf("30");
        }
    }
    return 0;
}
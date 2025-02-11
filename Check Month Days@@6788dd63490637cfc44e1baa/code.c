#include <stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    if (num < 1 && num > 12){
        printf("Invalid month");
        return 0;
    }
    else{
        if (num == 1 || num == 3 || num == 5 || num == 7 || num == 9 || num == 11){
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
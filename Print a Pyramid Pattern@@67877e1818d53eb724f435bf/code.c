#include <stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    int space = num - 1;
    int star = 1;
    for (int i = 0; i < num; i++){
        for (int j = 0; j < space; j++){
            printf(" ");
        }
        for (int j = 0; j < star; j++){
            printf("*");
        }
        for (int j = 0; j < space; j++){
            printf(" ")
        }
        space -= 1;
        star += 2;
    }
    return 0;
}
#include <stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    space = num - 1;
    star = 1;
    for (int i = 1; i <= num; i++){
        for (int j = 0; j < space; j++){
            printf(" ");
        }
        for (int j = 0; j < star; j++){
            printf("*");
        }
        printf("\n");
        space -= 1;
        star += 2;
    }
    space = 1;
    star -= 2;
    for (int i = 1; i < num; i++){
        for(int j = 0; j < space; j++){
            printf(" ");
        }
        for (int j = 0; j < star; j++){
            printf("*");
        }
        printf("\n");
        space += 1;
        star -= 2;
    }
    return 0;
}
#include <stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    for(int i = 0; i < num; i++){
        printf("*");
    }
    printf("\n");
    for (int i = 0; i < num-2 ; i++){
        printf("*");
        for (int j = 0; j < num -2; j++){
            printf(" ");
        }
        printf("*\n");
    }
    for(int i = 0; i < num; i++){
        printf("*");
    }
    return 0;
}
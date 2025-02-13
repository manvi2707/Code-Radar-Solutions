#include <stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    int n = num + 2;
    int star =  1;
    int space = (n - 1) / 2;
    for (int i = 0; i < num; i++){
        for (int j = 0; j < space; j++){
            printf(" ");
        }
        for (int j = 0; j < star; j++){
            printf("*");
        }
        for (int j = 0; j < space; j++){
            printf(" ");
        }
        space -= 2;
        star += 2;
        printf("\n");
    }
    return 0;
}
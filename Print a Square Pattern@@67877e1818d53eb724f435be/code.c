#include <stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    for (int i = 0; i < num; i++){
        printf("*")
        for (int j = 0; j < num-2; j++){
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}
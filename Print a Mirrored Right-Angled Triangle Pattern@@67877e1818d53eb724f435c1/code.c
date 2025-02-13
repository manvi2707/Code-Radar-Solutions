#include <stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    int space = num -1;
    for(int i = 0; i < num; i++){
        for(int j = 0; j < space; j++){
            printf("  ");
        }
        for(int j = 0; j < i+1; j++){
            printf("*")
        }
        printf("\n");
    }
}
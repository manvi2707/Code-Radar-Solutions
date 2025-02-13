#include <stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    for (int i = 1; i < num+1; i++){
        for (int j = 0; i < i; i++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
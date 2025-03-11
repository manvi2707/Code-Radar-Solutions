#include <stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    for(int j = num; j > 0; j++){
        for(int i = 1; i <=j; i++){
            printf("%d " , i);
        }
        printf("\n");
    }
    return 0;
}
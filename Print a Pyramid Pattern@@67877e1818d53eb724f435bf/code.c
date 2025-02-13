#include <stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    int n = -1;
    for(int i = 0; i < num; i++){
        n += 2;
        for(int j = 0; j < n; j++ ){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
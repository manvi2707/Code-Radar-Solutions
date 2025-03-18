#include <stdio.h>
int main(){
    int num;
    int n = 0;
    scanf("%d" , &num);
    for(int i = 1; i <= num; i++){
        for(int j = 0; j < i; j++){
            n = n+1;
            printf("%d " , n);
        }
        n = n+1;
        printf("\n");
    }
    return 0;
}
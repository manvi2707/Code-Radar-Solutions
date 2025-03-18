#include<stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    char alpha = 'A';
    for(int i = 0; i<num; i++){
        for(int j = 0; j<=i; j++){
            printf("%c " , alpha + j);
        }
        printf("\n");
    }
    return 0;
}
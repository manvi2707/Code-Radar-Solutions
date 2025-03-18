#include<stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    char alpha = 'A';
    for(int i = 0; i<num; i++){
        for(int j = 0; j<=i; j++){
            printf("%c " , char(int('A') - j));
        }
        printf("\n");
    }
    return 0;
}
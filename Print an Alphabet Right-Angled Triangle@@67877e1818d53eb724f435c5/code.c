#include<stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    char letter = 65;
    for(int j = 0; j < num; j++){
        for(char letter; letter < letter + num; letter++ ){
            printf("%c" , letter);
        }
        printf("\n");
    }
    return 0;
}
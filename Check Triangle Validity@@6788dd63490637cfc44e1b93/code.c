#include <stdio.h>

char* welcome() {
    int length , bredth, height;
    scanf("%d %d %d" , &length , &breadth , &height);
    if (length + breadth > height){
        if (length + height > breadth){
            if (breadth + height > length){
                printf("Valid");
            }
            else{
                printf("Invalid");
            }
        }
        else{
            printf("Invalid");
        }
    }
    else{
        printf("Invalid");
    }
}

int main() {
    welcome();
    return 0;
}
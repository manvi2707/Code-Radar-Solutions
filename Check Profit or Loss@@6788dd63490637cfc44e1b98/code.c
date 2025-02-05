#include <stdio.h>

char* welcome() {
    int CP , SP;
    scanf("%d %d" , &CP , &SP);
    if ((SP - CP)  > 0){
        printf("Profit");
    }
    else if(SP - CP < 0){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
}

int main() {
    welcome();
    return 0;
}
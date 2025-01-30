#include <stdio.h>

char* welcome() {
    int n,m;
    scanf("%d" , &n);
    if (n | 1 == 1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}

int main() {
    welcome();
    return 0;
}
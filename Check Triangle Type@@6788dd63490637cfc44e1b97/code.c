#include <stdio.h>

char* welcome() {
    int l , b , h;
    scanf("%d %d %d" , &l , &b , &h);
    if (l == b && l == h){
        printf("Equilateral");
    }
    else if((l == b && l != h) || (l == h && l != b) || (b == h && b != l)){
        printf("Isosceles");
    }
    else if(l != b && b != h && h != l){
        printf("Scalene");
    }
}

int main() {
    welcome();
    return 0;
}
#include <stdio.h>

char* welcome() {
    int marks;
    scanf("%d" , &marks);
    if (marks >= 90){
        printf("A");
    }
    else if(90 > marks >= 80){
        printf("B");
    }
    else if(80 > marks >= 70){
        printf("C");
    }
    else if(70 > marks >= 60){
        printf("D");
    }
    else{
        printf("F");
    }
}

int main() {
    welcome();
    return 0;
}
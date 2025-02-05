#include <stdio.h>

char* welcome() {
    int marks;
    scanf("%d" , &marks);
    if (marks >= 90){
        printf("A");
    }
    else if(90 > marks && marks >= 80){
        printf("B");
    }
    else if(80 > marks && marks >= 70){
        printf("C");
    }
    else if(70 > marks && marks >= 60){
        printf("D");
    }
    else if(marks < 60){
        printf("F");
    }
}

int main() {
    welcome();
    return 0;
}
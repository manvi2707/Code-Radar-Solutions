#include <stdio.h>

char* welcome() {
    char character;
    scanf("%c" , &character);
    if (character.isupper()){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
}

int main() {
    welcome();
    return 0;
}
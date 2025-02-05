#include <stdio.h>
#include <ctype.h>

char* welcome() {
    char character;
    scanf("%c" , &character);
    if (isupper(character)){
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
#include <stdio.h>
#include <ctype.h>

char* welcome() {
    char character;
    scanf("%c" , &character);
    if (isalpha(character)){
        if (isupper(character)){
            printf("Uppercase");
        }
        else{
            printf("Lowercase");
        }
    }
    else{
        printf("Not an alphabet");
    }
}

int main() {
    welcome();
    return 0;
}
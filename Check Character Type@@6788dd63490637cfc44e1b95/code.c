#include <stdio.h>
#include <ctype.h>

char* welcome() {
    char character;
    int i = 0 , found;
    int list[10] = {'a' , 'e' , 'i' , 'o' , 'u' , 'A' , 'E' , 'I' , 'O' , 'U'};
    int size = sizeof(list) / sizeof(list[0]);
    scanf("%c" , &character);
    if (isalnum(character)){
        if (isalpha(character)){
            for (i = 0 ; i < size , i++ ){
                if (list[i] == character){
                    found =  1
                    break
                }
                if (found){
                    printf("Vowel");
                }
                else{
                    printf("Consonant");
                }
            } 
        }
        else{
            printf("Digit");
        }
    }
    else{
        printf("Special Character");
    }
}

int main() {
    welcome();
    return 0;
}
#include<stdio.h>
#include<string.h>
void caesarCipher(char msg[] , int shift , char enc[]){
    int l = strlen(msg);
    for(int i = 0; i<l; i++){
        char ch = msg[i];

        if (ch >= 'a' && ch <= 'z') {  // Handle lowercase letters
            enc[i] = 'a' + (ch - 'a' + shift) % 26;
        } 
        else if (ch >= 'A' && ch <= 'Z') {  // Handle uppercase letters
            enc[i] = 'A' + (ch - 'A' + shift) % 26;
        } 
        else {  
            enc[i] = ch;  // Keep non-alphabet characters unchanged
        }
    }
    enc[l] = '\0';
}
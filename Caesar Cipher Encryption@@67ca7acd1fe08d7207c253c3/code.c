#include<stdio.h>
#include<string.h>
void caesarCipher(char msg[] , int shift , char enc[]){
    int l = strlen(msg);
    for(int i = 0; i<l; i++){
        enc[i] = msg[i] + shift;
        if(enc[i] > 122){
            enc[i] -= 122;
        } 
    }
}
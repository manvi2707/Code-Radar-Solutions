#include<stdio.h>
caesarCipher(char msg , int shift , char enc){
    int l = sizeof(msg) / sizeof(char);
    for(int i = 0; i<l; i++){
        enc[i] = msg[i] + shift;
        if(enc[i] > 122){
            enc[i] -= 122;
        } 
    }
}
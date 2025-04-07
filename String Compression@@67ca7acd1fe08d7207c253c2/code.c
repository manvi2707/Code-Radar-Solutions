#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* compressString(char str[] , char compressed[]){
    int l = strlen(str);
    int count = 1;
    int k = 0;
    for(int i = 1; i<l; i++){
        if(str[i] == str[i-1]){
            count++;
        }
        else{
            if(count == 1){
                compressed[k] = str[i-1];
                count = 1;
                k++;
            }
            else{
                compressed[k] = str[i-1];
                k++;
                char buffer[10];
                sprintf(buffer, "%d", count);
                for (int j = 0; buffer[j] != '\0'; j++) {
                    compressed[k++] = buffer[j];
                count = 1;
            }
            }
        }
    }
    compressed[k] = '\0';
    return compressed;
}
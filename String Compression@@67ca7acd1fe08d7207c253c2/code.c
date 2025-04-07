#include<stdio.h>
char compressString(char str[] , char compressed[]){
    int l = sizeof(str)/sizeof(str[0]);
    int count = 1;
    for(int i = 1; i<l; i++){
        if(str[i] == str[i-1]){
            count++;
        }
        else{
            if(count == 1){
                compressed[k] = str[i-1];
                count = 1;
            }
            else{
                compressed[k] = str[i-1];
                k++;
                compressed[k] = count;
                k++;
                count = 1;
            }
        }
    }
    return compressed;
}